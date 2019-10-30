/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:04:18 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:04:21 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
    return ;
}

Enemy::Enemy(int hp, std::string const &type)
{
    this->_hp = hp;
    this->_type = type;
	return ;
}

Enemy::Enemy(Enemy &obj)
{
	*this = obj;
	return ;
}

Enemy::~Enemy()
{
	return ;
}

Enemy &Enemy::operator=(Enemy const &x) 
{
	this->_hp = x._hp;
	this->_type = x._type;
	return (*this);
}

std::string Enemy::getType() const
{
	return (this->_type);
}

int Enemy::getHP() const
{
	return (this->_hp);
}

void Enemy::takeDamage(int x)
{
	int i = 0;

	if (x < 0)
		return;
	if (x > this->_hp)
		i = this->_hp;
	else
		i = x;
	this->_hp = this->_hp - i;
	if (this->_hp < 0)
		this->_hp = 0;
	return;
}

void Enemy::setHP(int i)
{
	this->_hp = i;
	return;
}
