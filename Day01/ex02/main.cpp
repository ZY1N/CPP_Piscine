/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:02:51 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 18:55:00 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include "iostream"
#include <cstdlib>



int main()
{
    Zombie      *z1;
    Zombie      *z2;
    ZombieEvent event;

    event.setZombieType("roommates");
    z1 = event.randomChump();
    z1->announce();
    delete z1;
    event.setZombieType("ex-roomates");
    z2 = event.randomChump();
    z2->announce();
    delete z2;
    return (0);
}

