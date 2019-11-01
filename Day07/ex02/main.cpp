/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 19:18:10 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/31 19:18:11 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "Array.hpp"

int main(void)
{
    //test for out of range
    std::cout << "==========================================================================" << std::endl;
    std::cout << "Out of range test:" << std::endl;
    try
    {
        Array <int>a(2);
        a[2];
    }
    catch(std::exception &e)
    {
        std::cout << "going out of range" << std::endl;
    }

    //int ary test
    std::cout << "==========================================================================" << std::endl;
    std::cout << "Int ary test" << std::endl;
    Array <int>b(10);
    int i = 0;

    while(i < 10)
    {
        b[i] = i;
        std::cout << b[i] << " ";
        i++;
    }
    std::cout << std::endl;

    //string ary test
    std::cout << "==========================================================================" << std::endl;
    std::cout << "String ary test" << std::endl;
    Array<std::string> c(5);

    c[0] = "dog";
    c[1] = "cat";
    c[2] = "bird";
    c[3] = "squirrel";
    c[4] = "butterfly";

    i = 0;
    try
    { 
    while(i <= 5)
    {
        std::cout << c[i] << std::endl;
        i++;
    }
    }
    catch(std::exception &e)
    {
        std::cout << "going out of range" << std::endl;
    }
    
    //find length
    std::cout << "==========================================================================" << std::endl;
    std::cout << "String ary size test" << std::endl;
	std::cout << c.size() << std::endl;

    //copy constructor
    std::cout << "==========================================================================" << std::endl;
    std::cout << "copy constructor test" << std::endl;
    
    Array<std::string> d(c);

    i = 0;
    while(i < 5)
    {
        std::cout << d[i] << std::endl;
        i++;
    }
    std::cout << "==========================================================================" << std::endl;
    std::cout << "assignment operator test" << std::endl;

    Array<std::string> e;
    e = c;

    i = 0;
    while(i < 5)
    {
        std::cout << e[i] << std::endl;
        i++; 
    }
}
