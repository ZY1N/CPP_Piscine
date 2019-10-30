/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 22:08:37 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/29 22:08:38 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string x):
    Form(x, ShrubberyCreationForm::145, ShrubberyCreationForm::137)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm()
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj):
    Form(obj.getName(), 145, 137)
{
    *this = obj;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{

}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &x)
{

}

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &x); 

