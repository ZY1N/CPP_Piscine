/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:49:39 by yinzhang          #+#    #+#             */
/*   Updated: 2019/11/01 16:49:40 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    //normal
    Span sp = Span(5);

    try
    {
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) 
    { 
        std::cout << (e.what());
    }

    //putting in more than avaliable 
    Span sp2 = Span(1);

    try
    {
    sp2.addNumber(5);
    sp2.addNumber(3);
    sp2.addNumber(17);
    sp2.addNumber(9);
    sp2.addNumber(11);
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
    }
    catch (std::exception &e) 
    { 
        std::cout << (e.what());
    }

    //out of range span
    //putting in more than avaliable 
    Span sp3 = Span(1);

    try
    {
    sp3.addNumber(5);
    std::cout << sp3.shortestSpan() << std::endl;
    std::cout << sp3.longestSpan() << std::endl;
    }
    catch (std::exception &e) 
    { 
        std::cout << (e.what()) << std::endl;
    }

    Span sp4 = Span(1);

    try
    {
    sp4.addNumber(5);
    std::cout << sp4.longestSpan() << std::endl;
    }
    catch (std::exception &e) 
    { 
        std::cout << (e.what());
    }

    Span sp5 = Span(100001);

    int i = 0;

    while(i < 100001)
    {
        sp5.addNumber(i);
        i++;
    }
}
