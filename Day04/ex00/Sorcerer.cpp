/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:57:42 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 14:57:43 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->_name = name;
    this->_title = title;
    std::cout << name << ", " << title << ", is born !" << std::endl;
    return ;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title
    << ", is dead. Consequences will never be the same !" << std::endl;
    return ;
}

Sorcerer::Sorcerer(const Sorcerer &x)
{
    *this = x;
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer &Sorcerer::operator= (const Sorcerer &x)
{
	this->_name = x.getName();
	this->_title = x.getTitle();
	return (*this);
}

void Sorcerer::introduce()
{
    std::cout << "I am " << this->_name << ", " << this->_title
    << ", and I like ponies !" << std::endl;
    return ;
}

const std::string Sorcerer::getName() const
{
    return(this->_name);
}

const std::string Sorcerer::getTitle() const
{
    return(this->_title);
}

void Sorcerer::setName(std::string x)
{
    this->_name = x;
    return ;
}

void Sorcerer::setTitle(std::string x)
{
    this->_title = x;
    return ;
}

std::ostream & operator<<(std::ostream &x, Sorcerer const &y)
{
	x << "I am " << y.getName() << ", " << y.getTitle() << ", and I like ponies !" << std::endl;
	return (x);    
}

void    Sorcerer::polymorph(Victim const &x) const 
{
    x.getPolymorphed();
    return ;
}
