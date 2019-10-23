/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:28:50 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 19:28:51 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << "<" << this->name << " (" 
    << this->type << ")> Braiiiiiiinnnssss..."
    << std::endl; 
}

void    Zombie::setType(std::string str)
{
    this->type = str;
    return ;
}

void    Zombie::setName(std::string str)
{
    this->name = str;
    return ;
}