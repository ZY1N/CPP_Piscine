/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:56:03 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 14:56:06 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <string>

class Pony
{
    public:
        std::string name;
        std::string color;
        std::string gender;
        int         jumpheight;
        bool         alivestatus;
        void    saybye();
    private:
    protected:
};

#endif