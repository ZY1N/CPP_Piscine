/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:17:29 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 22:17:29 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    this->_unit = 0;
    return ;
}

Squad::Squad(const Squad &x)
{
    int i = 0;

    while (i < 250)
    {
        this->_bracket[i] = x._bracket[i];
        i++;
    }
    this->_unit = i;
    return ;
}

Squad::~Squad()
{
    return ;
}

Squad &Squad::operator=(const Squad &x)
{
    int i = 0;

    while (i < 250)
    {
        this->_bracket[i] = x._bracket[i];
        i++;
    }
    this->_unit = i;
    return(*this);
}

int Squad::push(ISpaceMarine *obj)
{
    this->_bracket[this->_unit] = obj;
    this->_unit++;
    return(this->_unit);
}

int Squad::getCount() const
{
    return(this->_unit);
}

ISpaceMarine *Squad::getUnit(int n) const
{
    return(this->_bracket[n]);
}
