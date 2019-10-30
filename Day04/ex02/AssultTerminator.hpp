/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssultTerminator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:17:52 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 22:17:54 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSULTTERMINATOR_H
#define ASSULTTERMINATOR_H
#include <iostream>
#include "ISpaceMarine.hpp"

class AssultTerminator : public ISpaceMarine
{
    public:
        AssultTerminator();
        AssultTerminator(const AssultTerminator &x);
        ~AssultTerminator();
        AssultTerminator &operator=(const AssultTerminator &x);

        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
        ISpaceMarine*	clone() const;
        //const AssultTerminator *clone() const;
};

#endif
