/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:34:25 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/25 14:34:26 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name)
{
    this->_name = name;
    this->_hp = 100;
    this->_maxHp = 100;
    this->_ep = 100;
    this->_maxEp = 100;
    this->_level = 1;
    this->_meleeAD = 30;
    this->_rangedAD = 20;
    this->_armorDR = 5;
    std::cout << "Normal Constructor Called: Game starts" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Deconstructor Called: Game over wasted" << std::endl;
}

FragTrap::FragTrap (const FragTrap &obj)
{
    this->_name = obj._name;
    this->_hp = obj._hp;
    this->_maxHp = obj._maxHp;
    this->_ep = obj._ep;
    this->_maxEp = obj._maxEp;
    this->_level = obj._level;
    this->_meleeAD = obj._meleeAD;
    this->_rangedAD = obj._rangedAD;
    this->_armorDR = obj._armorDR;
    std::cout << "Copy Constructor Called: Reloaded" << std::endl;
    return ;
}
        
FragTrap &FragTrap::operator=(const FragTrap &x)
{
	this->_name = x._name;
	this->_hp = x._hp;
	this->_maxHp = x._maxHp;
	this->_ep = x._ep;
	this->_maxEp = x._maxEp;
	this->_level = x._level;
	this->_meleeAD = x._meleeAD;
	this->_rangedAD = x._rangedAD;
	this->_armorDR = x._armorDR;
    return (*this);
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4F-TP " << this->_name << " attacks " << target
        << " at range, causing " << this->_rangedAD << "points of damage !"
		<< std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4F-TP " << this->_name << " attacks " << target
        << " with melee, causing " << this->_meleeAD << "points of damage !"
		<< std::endl;
}

void FragTrap::poopFling(std::string const & target)
{
	std::cout << "FR4F-TP " << this->_name << " attacks " << target
        << " with a glob of poop, causing " << this->_meleeAD << "points of damage !"
		<< std::endl;
}

void FragTrap::peeSpray(std::string const & target)
{
	std::cout << "FR4F-TP " << this->_name << " attacks " << target
        << " with .... wait is that lemonade.... no ITS PEESPRAY , causing " << this->_meleeAD << "points of damage !"
		<< std::endl;
}

void FragTrap::barfRainbow(std::string const & target)
{
	std::cout << "FR4F-TP " << this->_name << " attacks " << target
        << " with the force of a dog throwing up after eating chocolate, causing " 
        << this->_meleeAD << "points of damage !"
		<< std::endl;
}

void FragTrap::smite(std::string const & target)
{
	std::cout << "FR4F-TP " << this->_name << " attacks " << target
        << " with smite, causing " << this->_meleeAD << "points of damage !"
		<< std::endl;
}

void FragTrap::cornAttack(std::string const & target)
{
	std::cout << "FR4F-TP "<< this->_name << " attacks " << target
        << " with pubic hair with shit in it, and gravel and corn(made my Jian-Yang), causing " << this->_meleeAD << "points of damage !"
		<< std::endl;
}


void FragTrap::takeDamage(unsigned int amount)
{
    (amount >= (unsigned int)this->_armorDR) ? (amount -= (unsigned int)this->_armorDR) : (amount = 0);
    if(amount > (unsigned int)this->_hp)
        amount = this->_hp;
    if(amount >= (unsigned int)this->_hp)
        this->_hp = 0;
    else
        this->_hp = (unsigned int)this->_hp - amount;
    std::cout << this->_name << " You have taken " << amount << " of damage, OUCH!"
    " you have " << this->_hp << " left" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if(amount > (unsigned int)this->_maxHp - (unsigned int)this->_hp)
        amount = (unsigned int)this->_maxHp - (unsigned int)this->_hp;
    this->_hp += amount;
    std::cout << this->_name << " You have healed " << amount << " of damage, Feels good man."
    << " you have " << this->_hp << " hp!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    srand(time(0));
    int random;

    random = rand() % 5;
	if(this->_ep < 25)
	{
		std::cout << "Out of energy, cannot carry out attack!" << std::endl;
        std::cout << "Costs 25 you have " << this->_ep << std::endl;
		return;
	}
    else
    {
	    this->_ep -= 25;
        if(random == 0)
            this->poopFling(target);
        else if(random == 1)
            this->peeSpray(target);
        else if(random == 2)
            this->barfRainbow(target);
        else if(random == 3)
            this->cornAttack(target);
        else if(random == 4)
            this->smite(target);
    }                
}

void FragTrap::getALL()
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

void FragTrap::setALL()
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

void FragTrap::setName(std::string x)
{
    this->_name = x;
}

void FragTrap::universalSetter(std::string x, int y)
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
