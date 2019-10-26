/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 19:53:12 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/25 19:53:13 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>


class   ClapTrap
{
    public:
        ClapTrap(const std::string name, unsigned int hp,
		unsigned int maxHp, unsigned int energy, unsigned int maxEnergy,
		unsigned int level, unsigned int melee, unsigned int ranged,
		unsigned int armor);
        ClapTrap(const ClapTrap &obj);
        ~ClapTrap();
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap &	operator=(const ClapTrap &x);
        std::string getName();
        void getALL();
        void setALL();
        void setName(std::string x);
        void universalSetter(std::string x, int y);

    protected:
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
