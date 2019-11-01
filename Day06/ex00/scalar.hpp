/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:14:50 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/30 14:14:52 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_H    
#define SCALAR_H

#include <iostream>
#include <stdlib.h>
#include "iomanip"
#include <vector>
#include <stdexcept>
#include <math.h>
#include <float.h>
#include <stdio.h>
#include <cmath>

class Scalar
{
    public:
    //constructors
        Scalar();
        Scalar(std::string s);
        int findPrecision(std::string s);
        Scalar(char c);
        Scalar(int i);
        Scalar(float f);
        Scalar(double d);
    //copy constructor
        Scalar(const Scalar &obj);
    //operator overload
        Scalar &operator=(const Scalar &obj);
    //destructor
        ~Scalar();
    //setters
         void setFlag(int i);
    //getters
        char getChar() const;
        int getInt() const;
        float getFloat() const;
        double getDouble() const;
        int  getPrecision() const;
        int getFlag() const;
    //conversions
        int toInt();
        float toF();
        double toD();
        char toC();
    //errors
    class NonDisplayable : public std::exception
    {
    public:
        NonDisplayable();
        NonDisplayable(NonDisplayable const &src);
        virtual ~NonDisplayable() throw();
        NonDisplayable &operator= (const NonDisplayable &rhs);
        const char *what() const throw();
    };

    class Impossible : public std::exception
    {
    public:
        Impossible();
        Impossible(Impossible const &src);
        virtual ~Impossible() throw();
        Impossible &operator= (const Impossible &rhs);
        const char *what() const throw();
    };

    private:
        char _c;
        int _i;
        float _f;
        double _d;
        int _precision;
        int _flag;


};

std::ostream &operator<<(std::ostream &o, Scalar &obj);


#endif
