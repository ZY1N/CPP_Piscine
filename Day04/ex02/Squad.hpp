/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:17:21 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 22:17:24 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "AssultTerminator.hpp"
#include "TacticalMarine.hpp"

class Squad : public ISquad
{
    public:
        Squad();
        Squad(const Squad &x);
        ~Squad();
        Squad &operator=(const Squad &x);

        int push(ISpaceMarine *obj);
        int getCount() const;
        ISpaceMarine *getUnit(int n) const;
    protected:
        int _unit;
        ISpaceMarine *_bracket[250];
};

#endif
