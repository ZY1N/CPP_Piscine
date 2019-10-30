/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:26:58 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/29 20:26:59 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    //this->_signed = false;
    //this->name = name;
    //this->_gradeSign = gradeSign;
    //this->_gradeExec = gradeExec;
    return ;
}

Form::Form(std::string name, int gradeSign, int gradeExec)
{
    if(gradeSign < 1 || gradeExec < 1)
        throw Form::GradeTooHighException();
    if(gradeSign > 150 || gradeExec > 150)
        throw Form::GradeTooLowException();    
    this->_signed = false;
    this->_name = name;
    this->_gradeSign = gradeSign;
    this->_gradeExec = gradeExec;
    return ;
}

Form::Form(const Form &src)
{
    this->_name = src.getName();
    this->_gradeSign = src.getGradeSign();
    this->_gradeExec = src.getGradeExec();
    *this = src;
}

Form::~Form()
{
    return ;
}

Form &Form::operator=(const Form &src)
{
    this->_signed = src.getSigned();
    return(*this);
}

std::string Form::getName() const
{
    return(this->_name);
}

bool Form::getSigned() const
{
    return(this->_signed);
}

int Form::getGradeSign() const
{
    return(this->_gradeSign);
}

int Form::getGradeExec() const
{
    return(this->_gradeExec);
}

void Form::beSigned(Bureaucrat &src)
{
    if(src.getGrade() > this->_gradeSign)
        throw Bureaucrat::GradeTooLowException();
    else
    {
        this->_signed = 1;
    }
    return ;
}

Form::GradeTooLowException::GradeTooLowException()
{
    return ;
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
    *this = src;
    return ;
}

//this one cant throw
Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return ;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator= (const GradeTooLowException &src)
{
    (void)src;
    return(*this);
}

const char *Form::GradeTooLowException::what() const throw()
{
    return("Grade below minimum bound.");
}

Form::GradeTooHighException::GradeTooHighException()
{
    return ;
}

/*
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src) throw()
{
    *this = src;
    return ;
}*/

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
    *this = src;
    return ;
}


//this one cant throw
Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
    return ;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator= (const GradeTooHighException &src)
{
    (void)src;
    return(*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return("Grade above maximum bound.");
}

std::ostream &operator<<(std::ostream &o, Form const &x)
{
    o << "Name of doc: " << x.getName() << std::endl << "Grade to exec: " 
    << x.getGradeExec() << std::endl << "Grade to sign " << x.getGradeSign() 
    << std::endl << "Is it signed? " << x.getSigned() << std::endl;

    return(o);
}