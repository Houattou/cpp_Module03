/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:08:30 by houattou          #+#    #+#             */
/*   Updated: 2023/10/19 18:28:20 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include<iostream>
#include<string>
class ClapTrap
{
    protected:
        std::string Name;
        unsigned int  HitPoint;
        unsigned int EnergyPoints;
        unsigned int  AttackDamage;
    public:
        ClapTrap();
        virtual ~ClapTrap();
        ClapTrap(const  ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ClapTrap(std::string name);
        void    attack(const std:: string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};
#endif