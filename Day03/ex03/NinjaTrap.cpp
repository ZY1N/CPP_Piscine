/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:45:55 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/25 21:45:56 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string name):
    ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "Normal Constructor Called: NinjaTrap is in the house!!!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "Deconstructor Called: Game over NinjaTrap died!!!" << std::endl;
}

NinjaTrap::NinjaTrap (const NinjaTrap &obj):
    ClapTrap(obj)
{
    std::cout << "Copy Constructor Called: NinjaTrap Reloaded" << std::endl;
    return ;
}
        
NinjaTrap &NinjaTrap::operator=(const NinjaTrap &x)
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

void NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "Mr. NinjaTrap " << this->_name << " attacks " << target
        << " at range, causing " << this->_rangedAD << "points of damage !"
		<< std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "Mr. NinjaTrap " << this->_name << " attacks " << target
        << " with melee, causing " << this->_meleeAD << "points of damage !"
		<< std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &x)
{
    std::cout << "There are two kinds of ninjas in this world. The kind that’s right behind you, and"
    << x.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &x)
{
    std::cout << "SCAVing you will be fun " << x.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &x)
{
    std::cout << "Watch out for my Frag " << x.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &x)
{
    std::cout << "I'll Clap you " << x.getName() << std::endl;
}
