/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 21:21:18 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/04/03 21:31:19 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name), _weapon(nullptr) {}

void HumanB::attack() const{
	if (_weapon != nullptr)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks bare-handed" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
	_weapon = &weapon;
}