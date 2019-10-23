/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:29:05 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 19:29:06 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N): _number(N)
{
    int i;
    this->_zombie = new Zombie[N];

    i = 0;
    while(i < N)
    {
        this->_zombie[i].setType("Horde");
        this->_zombie[i].setName(this->randomChump());
        i++;
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->_zombie;
}

void    ZombieHorde::announce()
{
    int i;

    i = 0;
    while(i < this->_number)
    {
        this->_zombie[i].announce();
        i++;
    }
}

std::string ZombieHorde::randomChump()
{
    time_t now = time(0);
    tm *gmtm = gmtime(&now);
    std::string randomName;
    std::string NameArray[10] = {"Mo", "Yi", "Jim", "Edgar", "Eric", "Steven",
    "Matt", "Hope", "Edward", "Cisco"};

    return (randomName = NameArray[(gmtm->tm_sec + rand()) % 10]);
    delete gmtm;
}
