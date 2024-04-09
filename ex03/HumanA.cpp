/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:27:04 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/04/09 00:08:57 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon) {}

void HumanA::attack () const{
	std::cout << _name << " attacks with their " << _weapon.getType() <<std::endl;
}