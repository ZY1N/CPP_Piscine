/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 19:53:04 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/25 19:53:05 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name, unsigned int hp,
		unsigned int maxHp, unsigned int energy, unsigned int maxEnergy,
		unsigned int level, unsigned int melee, unsigned int ranged,
		unsigned int armor)
{
    this->_name = name;
    this->_hp = hp;
    this->_maxHp = maxHp;
    this->_ep = energy;
    this->_maxEp = maxEnergy;
    this->_level = level;
    this->_meleeAD = melee;
    this->_rangedAD = ranged;
    this->_armorDR = armor;
	std::cout << "ClapTrap has been activated." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &x) :
	_name(x._name), _hp(x._hp), _maxHp(x._maxHp),
	_ep(x._ep), _maxEp(x._maxEp), _level(x._level),
	_meleeAD(x._meleeAD), _rangedAD(x._rangedAD), _armorDR(x._armorDR)
{
	std::cout << "Copy of ClapTrap has been activated."
		<< std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap has died." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    (amount >= (unsigned int)this->_armorDR) ? (amount -= (unsigned int)this->_armorDR) : (amount = 0);
    if(amount > (unsigned int)this->_hp)
        amount = (unsigned int)this->_hp;
    if(amount >= (unsigned int)this->_hp)
        this->_hp = 0;
    else
        this->_hp = (unsigned int)this->_hp - amount;
    std::cout << "You have taken " << amount << " of damage, OUCH!"
    " you have " << this->_hp << " left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(amount > (unsigned int)this->_maxHp - (unsigned int)this->_hp)
        amount = (unsigned int)this->_maxHp - (unsigned int)this->_hp;
    this->_hp += amount;
    std::cout << "You have healed " << amount << " of damage, Feels good man."
    << " you have " << this->_hp << " hp!" << std::endl;
}

std::string ClapTrap::getName()
{
    return(this->_name);
}

void ClapTrap::getALL()
{
    std::cout << "name " << this->_name << std::endl;
    std::cout << "hp " << this->_hp << std::endl;
    std::cout << "maxhp " << this->_maxHp << std::endl;  
    std::cout << "ep " << this->_ep << std::endl;
    std::cout << "maxep " << this->_maxEp << std::endl;
    std::cout << "level " << this->_level << std::endl;
    std::cout << "meleeAD " << this->_meleeAD << std::endl;
    std::cout << "rangedAD " << this->_rangedAD << std::endl;
    std::cout << "armor " << this->_armorDR << std::endl;
}

void ClapTrap::setALL()
{
    this->_hp = 100;
    this->_maxHp = 100;
    this->_ep = 100;
    this->_maxEp = 100;
    this->_level = 1;
    this->_meleeAD = 30;
    this->_rangedAD = 20;
    this->_armorDR = 5;
    std::cout << "resets all" << std::endl;
}

void ClapTrap::setName(std::string x)
{
    this->_name = x;
}

void ClapTrap::universalSetter(std::string x, int y)
{
    if(x == "hp")
        this->_hp = y;
    else if(x == "maxhp")
        this->_maxHp = y;
    else if(x == "ep")
        this->_ep = y;
    else if(x == "maxep")
        this->_maxEp = y;
    else if(x == "level")
        this->_level = y;
    else if(x == "meleead")
        this->_meleeAD = y;
    else if(x == "rangedad")
        this->_rangedAD = y;
    else if(x == "armordr")
        this->_armorDR = y;
}
