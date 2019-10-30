/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:03:36 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:03:37 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>

class AWeapon
{
    public:
        //constructor
        AWeapon(std::string const & name, int actionp, int damage);
        AWeapon(const AWeapon &x);

        //deconstructor
        virtual ~AWeapon();
        
        //overload
        AWeapon &operator= (const AWeapon &x);

        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        
        //leave for inheriting the zero means you have to overwrite it
        virtual void attack() const = 0;
    private:
        std::string _name;
        int         _dmg;
        int _ap;
};

#endif
