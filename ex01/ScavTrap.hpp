/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:18:39 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/18 14:04:05 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:

	public:
		void guardGate();

		ScavTrap(): ClapTrap(){}
		ScavTrap(std::string name): ClapTrap(name){}
		~ScavTrap();
};