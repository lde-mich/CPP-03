/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:12:41 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 09:02:54 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
    ClapTrap a ("Lde-mich");
    ClapTrap b("Aldisti");
	
	ScavTrap c("Dcastagn");

    FragTrap d("Gpanico");

    a.attack("Aldisti");
    b.attack("Lde-mich");
	c.attack("Aldisti");
}