/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:06:52 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/29 16:06:53 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"

int	main()
{
	int i = 0;
	int x = 0;

    Bureaucrat ME("Yineng", 1);

    std::cout << "Testing of the beureaucrat grade" << std::endl << std::endl;

    std::cout << "Over max && Over min" << std::endl;

    try
    {
        Bureaucrat ME3("GODZILLA", 151);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat ME2("GODYI", 0);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "====================================================================================" << std::endl;

    std::cout << "Test increment and decrement" << std::endl << std::endl;

    std::cout << "First overpromoting him" << std::endl;
    try
	{
		Bureaucrat ME3("Robin", 9);
		std::cout << ME3;
		i = 0;
		while (i++ < 10)
		{
			std::cout << "Name: " << ME3.getName() << " Current: " << ME3.getGrade() << " New: ";
			ME3.incrementGrade();
			std::cout << ME3.getGrade() << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

    std::cout << std::endl << "Then overdeomoting him" << std::endl;
    
    try
	{
		Bureaucrat ME4("Cyborg", 141);
		std::cout << ME4;
		i = 0;
		while (i++ < 10)
		{
			std::cout << "Name: " << ME4.getName() << " Current: " << ME4.getGrade() << " New: ";
			ME4.decrementGrade();
			std::cout << ME4.getGrade() << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	} 

	std::cout << std::endl << "Stream overload test:" << std::endl << ME;
	return (0);
}
