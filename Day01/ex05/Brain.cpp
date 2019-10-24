/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 21:03:25 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 21:03:26 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::identify()
{
    std::stringstream string;

    string << (void const *)this;
    return (string.str());
}
