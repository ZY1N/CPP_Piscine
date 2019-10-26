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

ScavTrap::ScavTrap(const std::string name)
{
    this->_name = name;
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

ScavTrap::ScavTrap (const ScavTrap &obj)
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
	std::cout << this->_name << " Mr. ScavTrap " << this->_name << " attacks " << target
        << " at range, causing " << this->_rangedAD << "points of damage !"
		<< std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << " Mr. ScavTrap " << this->_name << " attacks " << target
        << " with melee, causing " << this->_meleeAD << "points of damage !"
		<< std::endl;
}

void ScavTrap::rattlesnakeLimbo(std::string const & target)
{
	std::cout << this->_name << " Mr. ScavTrap challenges " << target
        << " to a game of how low can YOU go? If its low enough you can go.."
		<< std::endl;
}

void ScavTrap::connectFourPimples(std::string const & target)
{
	std::cout << this->_name << " Mr. ScavTrap callenges " << target
        << " to a game of a game of connect 4... using the pimples on his butt as a board "
		<< std::endl;
}

void ScavTrap::babyToss(std::string const & target)
{
	std::cout << this->_name << " Mr. ScavTrap callenges " << target
        << " to a game of bean bag toss .... with .... BABIES MHUAHAHAHAHA."
		<< std::endl;
}

void ScavTrap::hideNSeek(std::string const & target)
{
	std::cout << this->_name << " Mr. ScavTrap callenges " << target
        << " to a game of hide N seek. If you can find me you WIN!!"
		<< std::endl;
}

void ScavTrap::sugarFreeGummyBear(std::string const & target)
{
	std::cout << this->_name << " Mr. ScavTrap callenges " << target
        << " to a game of how how many sugar free hasbro gummy bears you can eat(lul I'm a robot)!"
		<< std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    (amount >= (unsigned int)this->_armorDR) ? (amount -= (unsigned int)this->_armorDR) : (amount = 0);
    if(amount > (unsigned int)this->_hp)
        amount = this->_hp;
    if(amount >= (unsigned int)this->_hp)
        this->_hp = 0;
    else
        this->_hp = (unsigned int)this->_hp - amount;
    std::cout << "You have taken " << amount << " of damage, OUCH!"
    " you have " << this->_hp << " left" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if(amount > (unsigned int)this->_maxHp - (unsigned int)this->_hp)
        amount = (unsigned int)this->_maxHp - (unsigned int)this->_hp;
    this->_hp += amount;
    std::cout << "You have healed " << amount << " of damage, Feels good man."
    << " you have " << this->_hp << " hp!" << std::endl;
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

void ScavTrap::getALL()
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

void ScavTrap::setALL()
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

void ScavTrap::setName(std::string x)
{
    this->_name = x;
}

void ScavTrap::universalSetter(std::string x, int y)
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
