/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:44:33 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 18:55:30 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H

#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
    public:
        void setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        Zombie* randomChump();
    private:
        std::string type;
    protected:
};

#endif

