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

class   Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &other);
        Fixed   &operator=(const Fixed &rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const); 
    private:
        int _value;
        static const int _fBits;
};

#endif
