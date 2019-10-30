/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:04:13 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:04:13 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy
{
    public:
        Enemy();
        Enemy(int hp, std::string const & type);
        Enemy(Enemy &obj);
        virtual ~Enemy();
		Enemy &operator=(Enemy const &x);
        std::string getType() const;
        int getHP() const;
        virtual void takeDamage(int x);
        void setHP(int i);
    protected:
        int _hp;
        std::string _type;
};

#endif
