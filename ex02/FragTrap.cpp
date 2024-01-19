/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:14:07 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 08:49:19 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout<< "FragTrap constructor called" <<std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout<< "FragTrap constructor called" <<std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout<< "FragTrap destructor called" <<std::endl;
}



















