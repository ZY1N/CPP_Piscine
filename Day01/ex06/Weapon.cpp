/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:02:29 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 22:02:30 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string set)
{
    setType(set);
}

const std::string Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}