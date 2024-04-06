/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:44:28 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/03/14 20:58:29 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

Zombie::Zombie(std::string name){

	this->_name = name;
	std::cout << "Zombie " << this->_name << " is created" << std::endl;
}

void Zombie::announce(void){

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl << std::endl;
}

int main(void){

	Zombie *horde = zombieHorde(10, "Vonny");
	
	delete[] horde;
}