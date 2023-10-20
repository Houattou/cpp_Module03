/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:35:03 by houattou          #+#    #+#             */
/*   Updated: 2023/10/19 19:13:33 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"
#include<iostream>
class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string	Name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap();
		
		DiamondTrap&	operator=(const DiamondTrap& other);
		
		void	attack(const std::string& other);
		void	whoAmI();
};

#endif