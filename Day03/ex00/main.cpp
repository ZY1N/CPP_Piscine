/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:34:37 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/25 14:34:40 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int     main()
{
    FragTrap A("Claptrap");
    FragTrap B(A);

    int i = 0;
    while(i < 6)
    {
        A.takeDamage(20);
        i++;
    }
    i = 0;

    std::cout << std::endl << std::endl << "1 more HIT!!! FINISH HIM" << std::endl;
    A.takeDamage(20);
    std::cout << "You can't kill a dead man!" << std::endl;
    A.takeDamage(100);
    std::cout << std::endl << std::endl;

    std::cout << "Hold on your trusty healer has arrived!" << std::endl;
    while(i < 6)
    {
        A.beRepaired(20);
        i++;
    }
    std::cout << "overheal doesn't work... try!" << std::endl;
    A.beRepaired(20);
    std::cout << std::endl << std::endl;
    A.vaulthunter_dot_exe("MO");
  
    std::cout << std::endl << std::endl 
    << std::endl << std::endl << std::endl
    << "Let's try with B" << std::endl;
    i = 0;
    while(i < 6)
    {
        B.takeDamage(20);
        i++;
    }
    i = 0;

    std::cout << std::endl << std::endl << "1 more HIT!!! FINISH HIM" << std::endl;
    B.takeDamage(20);
    std::cout << "You can't kill a dead man!" << std::endl;
    B.takeDamage(100);
    std::cout << std::endl << std::endl;

    std::cout << "Hold on your trusty healer has arrived!" << std::endl;
    while(i < 6)
    {
        B.beRepaired(20);
        i++;
    }
    std::cout << "overheal doesn't work... try!" << std::endl;
    B.beRepaired(20);
    std::cout << std::endl << std::endl;

    B.vaulthunter_dot_exe("Olaf");
}
