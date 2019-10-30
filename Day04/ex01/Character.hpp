/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:04:54 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:04:55 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    public:
        Character();
        Character(std::string const & name);
        Character(const Character &x);
        ~Character();
        Character &operator= (const Character &x);
        void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy*);
        std::string getName() const;
        AWeapon *getWeapon() const;
        int getAP() const;
    private:
        std::string _name;
        AWeapon *_weapon;
        int     _ap;
};

std::ostream &operator<<(std::ostream &o, Character const &x);

#endif
