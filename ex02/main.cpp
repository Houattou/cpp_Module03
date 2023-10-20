/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:40:43 by houattou          #+#    #+#             */
/*   Updated: 2023/10/19 18:46:23 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main()
{
   FragTrap hassna("hassna");
   hassna.attack("enemy");
   hassna.beRepaired(120);
   hassna.takeDamage(200);
}