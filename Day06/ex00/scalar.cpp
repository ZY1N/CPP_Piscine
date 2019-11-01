/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:14:45 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/30 14:14:46 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"
#include <stdlib.h>

//constructor
Scalar::Scalar()
{
    return ;
}

//conversion will happen here
int Scalar::toInt()
{
    if(this->_d >(INT_MAX) || this->_d < (INT_MIN))
    {
        throw Scalar::Impossible();
        return (0);
    }
    if(std::isnan(this->_d) == true || std::isinf(this->_d) ==true)
    {
        throw Scalar::Impossible();
        return (0);
    }
    this->_i = static_cast<int>(this->_d);
    return(getInt());
}
float Scalar::toF()
{
    this->_f = static_cast<float>(this->_d);
    return(getFloat());
}

double Scalar::toD()
{
    return (0);
}

char Scalar::toC()
{
    if(std::isnan(this->_d) == true)
    {
        throw Scalar::Impossible();
        return 0;
    }
    if(std::isprint(this->_d) == false)
    {
        throw Scalar::NonDisplayable();
        return 0;
    }
    this->_c = static_cast<char>(this->_d);
    return(getChar());
}

Scalar::Scalar(std::string s)
{
    try
    {
        this->_d = stod(s);
    }
    catch(std::exception &e)
    {
        std::cout << "Error the value isn't valid" << e.what() << std::endl;
        throw ;
    }
    this->_flag = 0;
    this->_precision = findPrecision(s);
    return ;
}

int Scalar::findPrecision(std::string s)
{
    int i = 0;

    while(i < (int)s.length())
    {
        if(s[i] == '.')
        {
            this->_flag = 1;
        }
        i++;
    }
    return(i);
}

void Scalar::setFlag(int i)
{
    this->_flag = i;
    return ;
}



Scalar::Scalar(char c):
    _c(c), _i((int)c), _f((float)c), _d((double)c), _precision(1)
{
    return ;
}


Scalar::Scalar(int i):
    _c((char)i), _i(i), _f((float)i), _d((double)i), _precision(1)
{
    return ;
}

Scalar::Scalar(float f):
    _c((char)f), _i((int)f), _f(f), _d((double)f), _precision(1)
{
    return ;
}

Scalar::Scalar(double d):
    _c((char)d), _i((int)d), _f((float)d), _d((double)d), _precision(1)
{
    return ;
}

//copy constructor, allocates seperate memory to both obj
Scalar::Scalar(const Scalar &obj):
    _c(obj.getChar()), _i(obj.getInt()), _f(obj.getFloat()),
    _d(obj.getDouble()), _precision(1)
{
    return ;
}

//operator overload, allocates same memory to both obj and src
Scalar &Scalar::operator=(const Scalar &obj)
{
    static_cast<void>(obj);
    return(*this);
}

//destructor
Scalar::~Scalar()
{
    return ;
}

//getters
char Scalar::getChar() const
{
    return(this->_c);
}

int Scalar::getInt() const
{
    return(this->_i);
}

float Scalar::getFloat() const
{
    return(this->_f);
}

double Scalar::getDouble() const
{
    return(this->_d);
}

int Scalar::getPrecision() const
{
    return(this->_precision);
}

int Scalar::getFlag() const
{
    return(this->_flag);
}

//stream overload
std::ostream &operator<<(std::ostream &o, Scalar &obj)
{
    try
    {
        obj.toC();
        o << "Char: '" << obj.getChar() << "'" << std::endl;
    }
    catch(std::exception &e)
    {
        o << "Char: " << e.what() << std::endl;
    }

    try
    {
        obj.toInt();
        o << "Int: " << obj.getInt() << std::endl;
    }
    catch(std::exception &e)
    {
        o << "Int: " << e.what() << std::endl;
    }

    try
    {
        obj.toF();
        if(obj.getFlag() == 1)
        {
            if(obj.getFloat() == (int)obj.getDouble())
                o << "Float: "<< obj.getFloat() <<  ".0f" << std::endl;
            else
                o << "Float: " << obj.getFloat() <<  "f" << std::endl;
        }
        else if(obj.getFlag() == 0)
        {
            if(std::isnan(obj.getFloat()) == false)
                o << "Float: " << obj.getFloat() << ".0f" << std::endl;
            else
                o << "Float: " << obj.getFloat() << "f" << std::endl;
 
        }
    }
    catch(std::exception &e)
    {
        o << "Float: " << e.what() << std::endl;
    }

    try
    {
        obj.toD();
        if(obj.getFlag() == 1)
        {
            if(obj.getFloat() == (int)obj.getDouble())
                o << "Double: " << obj.getDouble() << ".0" << std::endl;
            else
                o << "Double: " << std::left << std::setw(obj.getPrecision()) << obj.getDouble() << std::endl;
        }
        else if(obj.getFlag() == 0)
        {
            if(std::isnan(obj.getDouble()) == false)
                o << "Double: " << obj.getDouble() << ".0" << std::endl;
            else
                o << "Double: " << obj.getDouble() << std::endl;
        }

    }
    catch(std::exception &e)
    {
        o << "Double: " << e.what() << std::endl;
    }
    return(o);
}

Scalar::NonDisplayable::NonDisplayable()
{
    return ;
}

Scalar::NonDisplayable::NonDisplayable(Scalar::NonDisplayable const &src)
{
    *this = src;
    return ;
}

Scalar::NonDisplayable::~NonDisplayable() throw()
{
    return ;
}

Scalar::NonDisplayable &Scalar::NonDisplayable:: operator= (const Scalar::NonDisplayable &rhs)
{
    (void)rhs;
    return (*this);
}

const char *Scalar::NonDisplayable::what() const throw()
{
    return("Non displayable");
}

Scalar::Impossible::Impossible()
{
    return ;
}

Scalar::Impossible::Impossible(Scalar::Impossible const &src)
{
    *this = src;
    return ;
}

Scalar::Impossible::~Impossible() throw()
{
    return ;
}

Scalar::Impossible &Scalar::Impossible:: operator= (const Scalar::Impossible &rhs)
{
    (void)rhs;
    return (*this);
}

const char *Scalar::Impossible::what() const throw()
{
    return("impossible");
}