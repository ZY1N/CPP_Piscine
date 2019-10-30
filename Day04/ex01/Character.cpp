/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:04:58 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:04:59 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    return ;
}

Character::Character(const Character &src)
{
    *this = src;
    return ;
}

Character::Character(const std::string &name)
{
    this->_name = name;
    this->_ap = 40;
    this->_weapon = NULL;
    return ;
}

Character::~Character(void)
{
    return ;
}

Character &Character::operator= (const Character &rhs)
{
    if (this != &rhs)
    {
        this->_ap = rhs._ap;
        this->_name = rhs._name;
        this->_weapon = rhs._weapon;
    }
    return (*this);
}

std::ostream &operator<< (std::ostream &out, const Character &x)
{
    if (x.getWeapon() != NULL)
        out << x.getName() << " has " << x.getAP() << " AP and wields a " << x.getWeapon()->getName() << std::endl;
    else
        out << x.getName() << " has " << x.getAP() << " AP and is unarmed" << std::endl;
    return (out);
}

void Character::recoverAP(void)
{
    if (this->_ap <= 30)
        this->_ap += 10;
    else
        this->_ap = 40;
    return ;
}

void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
    return ;
}

void Character::attack(Enemy *enemy)
{
    int   ap_cost;
    
    if (this->_weapon == NULL || enemy == NULL)
        return ;
    else
    {
        ap_cost = this->_weapon->getAPCost();
        if (this->_ap - ap_cost >= 0)
        {
          enemy->takeDamage(this->_weapon->getDamage());
        std::cout << this->_name << " attacks " << enemy->getType()
            << " with a " << this->_weapon->getName() << std::endl;
        this->_weapon->attack();
        this->_ap -= ap_cost;
        if (enemy->getHP() <= 0)
            delete enemy;
        }
    }
    return ;
}

int Character::getAP(void) const
{
    return (this->_ap);
}

AWeapon *Character::getWeapon(void) const
{
    return (this->_weapon);
}

std::string Character::getName() const
{
    return (this->_name);
}
