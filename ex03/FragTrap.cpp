/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:24:25 by houattou          #+#    #+#             */
/*   Updated: 2023/10/17 20:17:41 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    std::cout<<"FragTrap Constructor called" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout<<"FragTrap Constructor that initialize by string called" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap Destructor called" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout<<"FragTrap assignation operator called" << std::endl;
    if(this != &other)
    {
        this->AttackDamage = other.AttackDamage;
        this->HitPoint = other.HitPoint;
        this->EnergyPoints = other.EnergyPoints;
    }
    return(*this);
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout<<"FragTrap copy constructor called" << std::endl;
    *this = other;
}

void FragTrap:: highFivesGuys(void)
{
    std::cout<<"FragTrap " << this->Name << " wants to high fives guys" << std::endl;
}

