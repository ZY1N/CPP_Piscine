/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:06:40 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/29 16:06:41 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <stdexcept>

#include "Form.hpp"

class Form;
/*
Notes:

There are 2 main concepts to today's excercise.
1. The ability to make classes within classes, which is useful
2. The ability to make and use custom exception handling through the use of exception library

- First the Bureaucrat class is made normally with all cons, decon, copy, overload operator
- then we make the classes that inherit from the public except class(stdexcept)

Making the custom exception class
- make the regular constructor deconstructor and overloads as normal
- add a what function that overloads the inherited exception's one
- add exception specification
    - so adding throw() to the end of the declaration
    - when specifier is left blank it calls std::unexpected
    - it garuntees nothing is thrown

*/

class   Bureaucrat
{
    public:
    //constructor
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &obj);
    //deconstructor
        ~Bureaucrat();
    //overload
        Bureaucrat &operator=(const Bureaucrat &obj);
    //getters
        std::string getName() const;
        int getGrade() const;
        void setGrade(int n);
    //increments
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &x);
    //classes for exceptions
    class GradeTooLowException : public std::exception
    {
        public:
            GradeTooLowException();
            GradeTooLowException(const GradeTooLowException &src);

            virtual ~GradeTooLowException(void) throw();

            GradeTooLowException &operator= (const GradeTooLowException &src);

            virtual const char *what() const throw();
    };

    class GradeTooHighException : public std::exception
    {
        public:
            GradeTooHighException();
            GradeTooHighException(const GradeTooHighException &src);

            ~GradeTooHighException(void) throw();

            GradeTooHighException &operator= (const GradeTooHighException &src);

            virtual const char *what() const throw();
    };

    private:
        std::string _name;
        int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &x);

#endif
