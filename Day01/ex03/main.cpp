/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:33:14 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 19:33:15 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main()
{
    ZombieHorde firstwave = ZombieHorde(20);
    ZombieHorde secondwave = ZombieHorde(100);
    firstwave.announce();
    secondwave.announce();
}
