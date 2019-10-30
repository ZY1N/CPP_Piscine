/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:04:46 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:04:47 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(const RadScorpion &x)
{
    std::cout << "* click click click *" << std::endl;

    *this = x;
    return ;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &x)
{
    this->_hp = x._hp;
    this->_type = x._type;
    return(*this);
}

void    RadScorpion::takeDamage(int x)
{
    if(x < 0)
        return ;
    if(this->_hp - x <= 0)
        this->_hp = 0;
    else
        this->_hp = x;
    return ;
}
