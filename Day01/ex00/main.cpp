/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:56:11 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 14:56:12 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Pony.hpp"
#include <string>

void    ponyOnTheHeap()
{
    Pony *heapPony;

    heapPony = new Pony();

    heapPony->setname("Jake");
    heapPony->setcolor("Chestnut");
    heapPony->setgender("Jake");
    heapPony->setjumpheight(5);
    heapPony->setalivestatus(1);

    std::cout << heapPony->getname() << "is a " 
    << heapPony->getcolor() << " pony of " << heapPony->getgender()
    << " gender " << " he can jump "
    << heapPony->getjumpheight() << " feet ";

    if (heapPony->getalivestatus() == 1)
        std::cout << "and he is alive.";
    else
        std::cout << "and he isn't alive.";
    
    heapPony->saybye();
    delete heapPony;
}

void    ponyOnTheStack()
{
    Pony stackPony;

    stackPony.setname("Spiderman");
    stackPony.setcolor("Pink");
    stackPony.setgender("Spider");
    stackPony.setjumpheight(100);
    stackPony.setalivestatus(0);

    std::cout << stackPony.getname() << " is a " 
    << stackPony.getcolor() << " pony of " << stackPony.getgender()
    << " gender " << " he can jump "
    << stackPony.getjumpheight() << " feet ";

    if (stackPony.getalivestatus() == 1)
        std::cout << "and he is alive.";
    else
        std::cout << "and he isn't alive.";
    
    stackPony.saybye();
}

int     main()
{
    std::cout << "Heap Pony's Turn" << std::endl;
    ponyOnTheHeap();
    std::cout << "\n\nStack Pony's Turn" << std::endl;
    ponyOnTheStack();
}
