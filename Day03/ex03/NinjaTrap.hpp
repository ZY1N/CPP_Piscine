/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:46:02 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/25 21:46:05 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
#define NINJATRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class   NinjaTrap: public ClapTrap
{
    public:
        NinjaTrap(const std::string name);
        ~NinjaTrap();
        NinjaTrap (const NinjaTrap &obj);
        NinjaTrap &operator=(const NinjaTrap &x);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);

        void ninjaShoebox(NinjaTrap &x);
        void ninjaShoebox(ScavTrap &x);
        void ninjaShoebox(FragTrap &x);
        void ninjaShoebox(ClapTrap &x);
    private:
};

#endif
