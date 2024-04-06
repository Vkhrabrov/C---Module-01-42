/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:03:54 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/04/03 23:07:00 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}
	// std::cout << "Zombie " << this->_name << " is created" << std::endl;

Zombie::~Zombie(){

	std::cout << "Zombie " << this->_name << " is destroyed" << std::endl;
}

void Zombie::announce(void){

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl << std::endl;
}