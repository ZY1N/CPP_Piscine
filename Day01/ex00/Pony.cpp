/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:55:56 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 14:55:58 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"
#include <string>

void    Pony::saybye()
{
    std::cout << " " << name << " has died" << std::endl;
}

void    Pony::setname(std::string s)
{
    name = s;
}
std::string    Pony::getname()
{
    return(this->name);
}

void    Pony::setcolor(std::string s)
{
    color = s;
}
std::string    Pony::getcolor()
{
    return(this->name);
}

void    Pony::setgender(std::string s)
{
    gender = s;
}
std::string    Pony::getgender()
{
    return(this->gender);
}

void    Pony::setjumpheight(int i)
{
    jumpheight = i;
}
int    Pony::getjumpheight()
{
    return(this->jumpheight);
}

void    Pony::setalivestatus(bool b)
{
    alivestatus = b;
}
bool    Pony::getalivestatus()
{
    return(this->alivestatus);
}
