/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:06:06 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/25 17:06:08 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name):
    ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
    this->_name = this->_name;
    this->_hp = 100;
    this->_maxHp = 100;
    this->_ep = 50;
    this->_maxEp = 50;
    this->_level = 1;
    this->_meleeAD = 20;
    this->_rangedAD = 15;
    this->_armorDR = 3;
    std::cout << "Normal Constructor Called: ScavTrap is in the house!!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Deconstructor Called: Game over ScavTrap died!!!" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap &obj):
    ClapTrap(obj)
{
    std::cout << "Copy Constructor Called: ScavTrap Reloaded" << std::endl;
    return ;
}
        
ScavTrap &ScavTrap::operator=(const ScavTrap &x)
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

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "Mr. ScavTrap " << this->_name << " attacks " << target
        << " at range, causing " << this->_rangedAD << "points of damage !"
		<< std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Mr. ScavTrap " << this->_name << " attacks " << target
        << " with melee, causing " << this->_meleeAD << "points of damage !"
		<< std::endl;
}

void ScavTrap::rattlesnakeLimbo(std::string const & target)
{
	std::cout << "Mr. ScavTrap challenges " << target
        << " to a game of how low can YOU go? If its low enough you can go.."
		<< std::endl;
}

void ScavTrap::connectFourPimples(std::string const & target)
{
	std::cout << "Mr. ScavTrap callenges " << target
        << " to a game of a game of connect 4... using the pimples on his butt as a board "
		<< std::endl;
}

void ScavTrap::babyToss(std::string const & target)
{
	std::cout << "Mr. ScavTrap callenges " << target
        << " to a game of bean bag toss .... with .... BABIES MHUAHAHAHAHA."
		<< std::endl;
}

void ScavTrap::hideNSeek(std::string const & target)
{
	std::cout << "Mr. ScavTrap callenges " << target
        << " to a game of hide N seek. If you can find me you WIN!!"
		<< std::endl;
}

void ScavTrap::sugarFreeGummyBear(std::string const & target)
{
	std::cout << "Mr. ScavTrap callenges " << target
        << " to a game of how how many sugar free hasbro gummy bears you can eat(lul I'm a robot)!"
		<< std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
    srand(time(0));
    int random;

    random = rand() % 5;

    if(random == 0)
        this->rattlesnakeLimbo(target);
    else if(random == 1)
        this->connectFourPimples(target);
    else if(random == 2)
        this->babyToss(target);
    else if(random == 3)
        this->hideNSeek(target);
    else if(random == 4)
        this->sugarFreeGummyBear(target);
}
