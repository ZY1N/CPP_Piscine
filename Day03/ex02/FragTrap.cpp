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

FragTrap::FragTrap(const std::string name):
    ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    std::cout << "Normal Constructor Called: Game starts" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Deconstructor Called: Game over wasted" << std::endl;
}

FragTrap::FragTrap (const FragTrap &obj):
    ClapTrap(obj)
{
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
	std::cout << "FR4F-TP " << this->_name << " attacks " << target
        << " with pubic hair with shit in it, and gravel and corn(made my Jian-Yang), causing " << this->_meleeAD << "points of damage !"
		<< std::endl;
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
        std::cout << "Costs 25 you have " << this->_ep << std::endl;
    }                
}
