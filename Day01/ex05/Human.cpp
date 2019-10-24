/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 21:03:40 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 21:03:41 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string    Human::identify()
{
    return(this->onlyOne.identify());
}

Brain &Human::getBrain()
{
    return(this->onlyOne);
}
