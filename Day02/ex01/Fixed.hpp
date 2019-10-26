/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:37:51 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/23 19:37:53 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class   Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &other);
        Fixed(const int value);
        Fixed(const float value);
        Fixed   &operator=(const Fixed &rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const);
        float toFloat(void) const;
        int    toInt(void) const;        
    private:
        int _value;
        static const int _fBits;
};

std::ostream    &operator<<(std::ostream &out, Fixed const &in);

#endif
