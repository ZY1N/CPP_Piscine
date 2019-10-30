/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:58:06 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 14:58:08 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
{
    this->_name = name;
    std::cout << "Some random victim called " << name << " just popped !"<< std::endl;
    return ;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason !"<< std::endl;
    return ;
}

Victim::Victim(const Victim &x)
{
    *this = x;
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Victim &Victim::operator= (const Victim &x)
{
	this->_name = x.getName();
	this->_title = x.getTitle();
	return (*this);
}

void Victim::introduce()
{
    std::cout << "I'm " << this->_name << " and I like otters !" << std::endl;
    return ;
}

const std::string Victim::getName() const
{
    return(this->_name);
}

const std::string Victim::getTitle() const
{
    return(this->_title);
}

void Victim::setName(std::string x)
{
    this->_name = x;
    return ;
}

void Victim::setTitle(std::string x)
{
    this->_title = x;
    return ;
}

std::ostream & operator<<(std::ostream &x, Victim const &y)
{
	x << "I'm " << y.getName() << y.getTitle() << " and I like otters !" << std::endl;
	return (x);    
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep !"
    << std::endl;
    return ;
}
