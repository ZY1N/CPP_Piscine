/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:17:37 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 22:17:38 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
#define TACTICALMARINE_H

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(const TacticalMarine &x);
        ~TacticalMarine();
        TacticalMarine &operator=(const TacticalMarine &x);

        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
        ISpaceMarine*	clone() const;
};

#endif
