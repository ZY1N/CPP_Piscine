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
#include "ClapTrap.hpp"

class   FragTrap: public ClapTrap
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
        void vaulthunter_dot_exe(std::string const & target);
    private:
};

#endif
