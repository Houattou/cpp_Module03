/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:40:43 by houattou          #+#    #+#             */
/*   Updated: 2023/10/19 18:35:06 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main()
{
    
    ScavTrap hassna("hassna");
    hassna.beRepaired(600);
    hassna.attack("lol");
    hassna.takeDamage(10000);
    hassna.attack("ouattou");
    hassna.guardGate();
    return(0);
}