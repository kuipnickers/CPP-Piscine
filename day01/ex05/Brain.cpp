/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 15:50:37 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/05 16:01:03 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	return;
}

const Brain    *Brain::identify() const
{
    return (this);
}

Brain::~Brain() {
	return;
}
