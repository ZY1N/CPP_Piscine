/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:03:42 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:03:43 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int actionp, int damage)
{
    this->_name = name;
    this->_ap = actionp;
    this->_dmg = damage;
    return ;
}

AWeapon::AWeapon(const AWeapon &x)
{
    *this = x;
    return ;
}

AWeapon::~AWeapon()
{
    return ;
}
        
AWeapon &AWeapon::operator= (const AWeapon &x)
{
    this->_name = x.getName();
    this->_dmg = x.getDamage();
    this->_ap = x.getAPCost();
    return(* this);
}

std::string AWeapon::getName() const
{
    return(this->_name);
}

int AWeapon::getAPCost() const
{
    return(this->_ap);
}

int AWeapon::getDamage() const
{
    return(this->_dmg);
}
