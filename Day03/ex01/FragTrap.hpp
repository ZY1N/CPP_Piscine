/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:34:31 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/25 14:34:32 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <string>

class   FragTrap
{
    public:
        FragTrap(const std::string name);
        ~FragTrap();
        FragTrap (const FragTrap &obj);
        FragTrap &operator=(const FragTrap &x);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void poopFling(std::string const & target);
        void peeSpray(std::string const & target);
        void barfRainbow(std::string const & target);
        void cornAttack(std::string const & target);
        void smite(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const & target);
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
