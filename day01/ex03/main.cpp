/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:19:45 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/02 12:58:08 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"



void	ztest() {
	int n = 10;
	ZombieHorde Uno = ZombieHorde(n);
	Uno.announce();
}

int		main() {
	ztest();
	return (0);
}
