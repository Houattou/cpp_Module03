/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:08:35 by houattou          #+#    #+#             */
/*   Updated: 2023/10/17 16:26:43 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap& ClapTrap:: operator=(const ClapTrap& other)
{
    std::cout<<"ClapTrap Assignation operator called" << std::endl;
    if(this != &other)
    {
        this->AttackDamage = other.AttackDamage;
        this->HitPoint = other.HitPoint;
        this->Name = other.Name;
        this->EnergyPoints = other.EnergyPoints;
    }
    return(*this);
}
ClapTrap::ClapTrap():HitPoint(10),EnergyPoints(10),AttackDamage(0)
{
   
    std::cout<<"ClapTrap default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):Name(name), HitPoint(10),EnergyPoints(10), AttackDamage(0)
{
    std::cout<<"ClapTrap Constructor that Initialize by Name is Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap Destructor Called" << std::endl;
}

ClapTrap:: ClapTrap(const ClapTrap& other)
{
    std::cout<<"ClapTrap Copy Constructor Called" << std::endl;
    *this = other;
}

/*---------------Mombers functions:------------------------------------*/
void ClapTrap::attack(const std::string&  target)
{
   if(this->HitPoint > 0 && this->EnergyPoints > 0)
   {
        this->EnergyPoints--;
        std::cout <<"ClapTrap " << this->Name << " attacks " << target << " and causes " << this->AttackDamage << " damage!" << std::endl;
   }
   else
        std::cout  << "ClapTrap "<< this->Name << " can't attack due to lack of energy or hit points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) 
{
	if (this->HitPoint <= amount) 
    {
		this->HitPoint = 0;
        std::cout <<"ClapTrap " <<this->Name << " has been defeated!" << std::endl;
        return;
	}
    std::cout <<"ClapTrap " <<this->Name << " takes " << amount << " points of damage!" << std::endl;
	this->HitPoint -= amount;
}


void  ClapTrap :: beRepaired(unsigned int amount)
{
    if(this->EnergyPoints > 0 && this->HitPoint > 0)
    {
      this->HitPoint += amount;
      this->EnergyPoints--;    
      std::cout  << "ClapTrap "<< this->Name << " repairs itself for  " << amount << "+ hit points!" << std::endl;
    }
    else 
        std::cout  << "ClapTrap "<< this->Name << " can't be repaired due to lack of energy or hit points!" << std::endl;
}
