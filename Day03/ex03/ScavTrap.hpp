/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:06:14 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/25 17:06:15 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_H
#define ScavTrap_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class   ScavTrap: public ClapTrap
{
    public:
        ScavTrap(const std::string name);
        ~ScavTrap();
        ScavTrap (const ScavTrap &obj);
        ScavTrap &operator=(const ScavTrap &x);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void rattlesnakeLimbo(std::string const & target);
        void connectFourPimples(std::string const & target);
        void babyToss(std::string const & target);
        void hideNSeek(std::string const & target);
        void sugarFreeGummyBear(std::string const & target);
        void challengeNewcomer(std::string const & target);
    private:
};

#endif
