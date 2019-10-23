/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:29:13 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 19:29:17 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde
{
    public:
        ZombieHorde(int N);
        ~ZombieHorde();
        void announce();
        std::string randomChump();
    private:
        int _number;
        Zombie      *_zombie;
    protected:
};

#endif
