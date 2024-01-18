/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:18:35 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/18 15:29:51 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout<< "ScavTrap constructor called" <<std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout<< "ScavTrap constructor called" <<std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout<< "ScavTrap destructor called" <<std::endl;    
}

void ScavTrap::guardGate()
{
    
}















