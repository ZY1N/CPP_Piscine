/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:03:56 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:03:57 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : 
    AWeapon("Plasma Rifle", 5, 21)
{
    return ;
}

PlasmaRifle::~PlasmaRifle()
{
    return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle &obj) : AWeapon(obj)
{
    *this = obj;
    return ;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &r)
{
    AWeapon::operator=(r);
    return (*this);
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return ;
}
