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

class   ScavTrap
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
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewcomer(std::string const & target);
        void getALL();
        void setALL();
        void setName(std::string x);
        void universalSetter(std::string x, int y);
    private:
        std::string _name;
        int _hp;
        int _maxHp;
        int _ep;
        int _maxEp;
        int _level;
        int _meleeAD;
        int _rangedAD;
        int _armorDR;
};

#endif
