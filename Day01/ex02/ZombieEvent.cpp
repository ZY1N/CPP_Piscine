/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:44:23 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 18:54:46 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *newZombie = new Zombie();

    newZombie->type = this->type;
    newZombie->name = name;
    return(newZombie);
}

Zombie* ZombieEvent::randomChump()
{
    time_t now = time(0);
    tm *gmtm = gmtime(&now);
    
    Zombie *randomGuy;
    randomGuy = new Zombie();
    std::string randomName;
    std::string NameArray[10] = {"Mo", "Yi", "Jim", "Edgar", "Eric", "Steven",
    "Matt", "Hope", "Edward", "Cisco"};
    randomName = NameArray[(gmtm->tm_sec + rand()) % 10];
    randomGuy->type = this->type;
    randomGuy->name = randomName;
    return(randomGuy);
}

