/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:44:02 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 18:54:33 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void    Zombie::setname(std::string s)
{
    name = s;
}

void    Zombie::settype(std::string s)
{
    type = s;
}

void    Zombie::announce()
{
    std::cout << "<" << this->name << " (" 
    << this->type << ")> Braiiiiiiinnnssss..."
    << std::endl; 
}
