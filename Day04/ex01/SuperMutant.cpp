/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:04:32 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:04:33 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return ;
}

SuperMutant::SuperMutant(const SuperMutant &x)
{
    *this = x;
    return ;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
    return ;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &x)
{
    this->_hp = x._hp;
    this->_type = x._type;
    return(*this);
}

void    SuperMutant::takeDamage(int x)
{
    x = x - 3;

    if(x < 0)
        return ;
    if(this->_hp - x <= 0)
        this->_hp = 0;
    else
        this->_hp = x;
    return ;
}