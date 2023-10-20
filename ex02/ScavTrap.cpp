/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:42:27 by houattou          #+#    #+#             */
/*   Updated: 2023/10/17 20:27:54 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

/*---------------Constructor that initialize by default-------*/
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	this->HitPoint = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}
/*-------------------------------------------------------------*/
/*---------------Constructor that initialize by string--------*/
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor that initialize by string is called" << std::endl;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    this->HitPoint = 100;
    this->Name = name;
}
/*-------------------------------------------------------------*/
/*---------------Copy Constructor-----------------------------*/
ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    std::cout<<"ScavTrap Copy Constructor called" << std::endl;
    *this = other;
}
/*-------------------------------------------------------------*/
/*---------------Destructor------------------------------------*/
ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap Destructor called" << std::endl;
    
}
/*-------------------------------------------------------------*/
/*---------------Operator Overload----------------------------*/
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout<<"ScavTrap Assignation operator called" << std::endl;
   if(this != &other)
    {
        this->AttackDamage = other.AttackDamage;
        this->HitPoint = other.HitPoint;
        this->Name = other.Name;
        this->EnergyPoints = other.EnergyPoints;
    }
    return(*this);
}
/*-------------------------------------------------------------*/
/*---------------Member Functions------------------------------*/
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->HitPoint > 0 && this->EnergyPoints > 0)
    {
        this->EnergyPoints--;
        std::cout << "ScavTrap " << this->Name << " attack " << target << " , causing " << this->AttackDamage << " points of damage!" << std::endl;
        
    }
    else
        std::cout << "ScavTrap " << this->Name << " can't attack due to lack of energy or hit points!" << std::endl;
}

