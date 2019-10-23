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

    heapPony->name = "Jake";
    heapPony->color = "Chestnut";
    heapPony->gender = "Unknown";
    heapPony->jumpheight = 5;
    heapPony->alivestatus = 1;

    std::cout << heapPony->name << "is a " 
    << heapPony->color << " pony of " << heapPony->gender
    << " gender " << " he can jump "
    << heapPony->jumpheight << " feet ";

    if (heapPony->alivestatus == 1)
        std::cout << "and he is alive.";
    else
        std::cout << "and he isn't alive.";
    
    heapPony->saybye();
    delete heapPony;
}

void    ponyOnTheStack()
{
    Pony stackPony;

    stackPony.name = "Spiderman";
    stackPony.color = "Pink";
    stackPony.gender = "Spider";
    stackPony.jumpheight = 100;
    stackPony.alivestatus = 0;

    std::cout << stackPony.name << " is a " 
    << stackPony.color << " pony of " << stackPony.gender
    << " gender " << " he can jump "
    << stackPony.jumpheight << " feet ";

    if (stackPony.alivestatus == 1)
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
