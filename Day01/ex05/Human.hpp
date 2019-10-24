/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 21:03:47 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 21:03:48 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"
#include <string>

class   Human
{
    public:
        std::string    identify();
        Brain &getBrain();
    private:
        Brain onlyOne;
    protected:
};

#endif
