/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:37:57 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/23 19:37:58 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int  Fixed:: _fbits = 8;

Fixed::Fixed()
{
    this->_value = 0;
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

//copy constructor
Fixed::Fixed(const Fixed &other)
{
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
    return ;
}

//assignation operator overload, this overloads the assignement operator
//it makes a copy of the values to an already existing class object
Fixed   &Fixed::operator=(const Fixed &rhs)
{
    if(this != &rhs)
        this->_value = rhs.getRawBits();
    std::cout << "Assignation operator called" << std::endl;
    return(*this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

