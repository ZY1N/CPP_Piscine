/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:02:54 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 22:02:54 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void    HumanB::attack()
{
    std::cout << this->humanBWeapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &x)
{
    humanBWeapon = &x;
    return ;
}
