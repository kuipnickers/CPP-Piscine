/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:39 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 13:58:03 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int     main(void)
{
    FragTrap    freddy("Freddy");
    ScavTrap    steve("Steve");
    ClapTrap    carl("Carl");

    carl.meleeAttack(steve.getName());
    steve.takeDamage(carl.getMelee_dmg());

    steve.rangedAttack(freddy.getName());
    freddy.takeDamage(steve.getRanged_dmg());

    freddy.vaulthunter_dot_exe(steve.getName());
    steve.takeDamage(freddy.getVHDE_dmg());

    freddy.meleeAttack(carl.getName());
    carl.takeDamage(freddy.getMelee_dmg());
    steve.beRepaired(30);
    steve.challengeNewcomer(freddy.getName());
    return (0);
}
