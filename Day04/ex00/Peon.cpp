/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:58:20 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 14:58:21 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(Peon &obj) : Victim(obj)
{
	*this = obj;
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon &Peon::operator=(Peon const &r) 
{
	this->getName() = r.getName();
	return (*this);
}

std::string		Peon::getName(void) const
{
    return(this->_name);
}

std::ostream & operator<<(std::ostream &x, Peon const &y)
{
	x << "I'm " << y.getName() << " and I like otters !" << std::endl;
	return (x);    
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
	return;
}
