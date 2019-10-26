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

const int Fixed::_fBits = 8;

Fixed::Fixed()
{
    this->_value = 0;
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    return ;
}

Fixed::Fixed(const int value)
{
    this->_value = value << _fBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    this->_value = roundf(value * (1 << _fBits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

//overload
Fixed   &Fixed::operator=(const Fixed &rhs)
{
    if(this != &rhs)
        this->_value = rhs.getRawBits();
    std::cout << "Assignation operator called" << std::endl;
    return(*this);
}

//extraction operator overload
std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

int     Fixed::getRawBits(void) const
{
    return(this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    float ret;

    ret = float(this->_value) / (1 << _fBits);
    return(ret);
}

int    Fixed::toInt(void) const
{
    int ret;

    ret = (int)(this->_value >> _fBits);
    return(ret);
} 
