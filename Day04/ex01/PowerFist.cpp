/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:04:07 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:04:08 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : 
    AWeapon("Power Fist", 8, 50)
{
    return ;
}

PowerFist::~PowerFist()
{
    return ;
}

PowerFist::PowerFist(PowerFist &obj) : AWeapon(obj)
{
    *this = obj;
    return ;
}

PowerFist &PowerFist::operator=(PowerFist const &r)
{
    AWeapon::operator=(r);
    return (*this);
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
    return ;
}
