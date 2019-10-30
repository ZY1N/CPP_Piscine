/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:06:45 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/29 16:06:47 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
    if(1 <= grade && grade <= 150)
    {
        this->_name = name;
        this->_grade = grade;
    }
    else
    {
        if(grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if(grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
    return ;
}

Bureaucrat::~Bureaucrat()
{
    return ;
}

std::string Bureaucrat::getName() const
{
    return(this->_name);
}

int Bureaucrat::getGrade() const
{
    return(this->_grade);
}

void Bureaucrat::setGrade(int n)
{
    this->_grade = n;
    return ;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
    return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
    {
        this->_name = obj._name;
        this->_grade = obj._grade;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &x)
{
    o << "Name: " << x.getName() << " Grade: " << x.getGrade() << std::endl;
    return(o);
}

//exceptions

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
    *this = src;
    return ;
}

//this one cant throw
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return ;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &src)
{
    (void)src;
    return(*this);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade below minimum bound.");
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    return ;
}

/*
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src) throw()
{
    *this = src;
    return ;
}*/

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
    *this = src;
    return ;
}


//this one cant throw
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
    return ;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &src)
{
    (void)src;
    return(*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade above maximum bound.");
}
