/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:40:43 by houattou          #+#    #+#             */
/*   Updated: 2023/10/19 19:09:43 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"
#include"DiamondTrap.hpp"


int main( void )
{
    DiamondTrap d("hassna");
    d.whoAmI();
    d.attack("enemy");
    return EXIT_SUCCESS;

}