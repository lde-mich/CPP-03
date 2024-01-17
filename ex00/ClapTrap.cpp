/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:12:45 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/17 19:26:46 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    
}



std::string ClapTrap::getName()
{
    return (this->name);
}

int ClapTrap::getHitPoints()
{
    return (this->hitPoints);
}
int ClapTrap::getEnergyPoints()
{
    return (this->energyPoints);
}

int ClapTrap::getAttackDamage()
{
    return (this->attackDamage);
}



void ClapTrap::setName(std::string name)
{
	this->name = name;   
}

void ClapTrap::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;	
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	this->energyPoints = energyPoints;	
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	this->attackDamage = attackDamage;	
}



void ClapTrap::attack(const std::string& target)
{

}

void ClapTrap::takeDamage(unsigned int amount)
{
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	
}











