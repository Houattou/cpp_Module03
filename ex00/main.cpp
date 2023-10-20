/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:08:41 by houattou          #+#    #+#             */
/*   Updated: 2023/10/19 18:26:45 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
int main() {
    ClapTrap clap("Clap");
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    ClapTrap clone("Clone");
    clone.attack("Another Enemy");

    return 0;
}
   

