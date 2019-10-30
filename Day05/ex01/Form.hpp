/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:27:02 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/29 20:27:05 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

# include <iostream>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
    //constructors
        Form();
        Form(std::string name, int gradeSign, int gradeExec);
        Form(const Form &src);
    //deconstructor
        ~Form();
    //operator overload
        Form &operator=(const Form &src);
    //extra functions
        void beSigned(Bureaucrat &src);
        bool getSigned() const;
        int getGradeSign() const;
        int getGradeExec() const;
        std::string getName() const;

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
        bool _signed;
        int _gradeExec;
        int _gradeSign;
};

std::ostream &operator<<(std::ostream &o, Form const &x);

#endif 
