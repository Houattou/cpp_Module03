/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:34:54 by houattou          #+#    #+#             */
/*   Updated: 2023/10/17 20:41:43 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"
#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name) , ScavTrap(name)
{
    std::cout << "DiamondTrap constructor initialize by  name called." << std::endl;
    this->Name = name;
    this->ClapTrap::Name = name + "_clap_name";
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;

}

DiamondTrap::DiamondTrap():ClapTrap(),  FragTrap(), ScavTrap()
{
    std::cout << "Default DiamondTrap constructor called." << std::endl;
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;
}
void   DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
DiamondTrap :: DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) 
{
    std::cout << "DiamondTrap assignation operator called." << std::endl;
    if(this != &other)
    {
        this->Name = other.Name;
        this->HitPoint = other.HitPoint;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return(*this);
}

DiamondTrap::~DiamondTrap() 
{
    std::cout << "DiamondTrap destructor called." << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << this->Name << " and ClapTrap name is " << this->ClapTrap::Name << std::endl;
}