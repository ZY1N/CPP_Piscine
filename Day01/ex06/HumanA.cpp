/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:03:06 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 22:03:09 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& x): humanAWeapon(x)
{
    this->name = name;
}

void    HumanA::attack()
{
    std::cout << this->humanAWeapon.getType() << std::endl;
}
