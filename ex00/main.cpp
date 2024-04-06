/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:44:28 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/03/14 21:04:19 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void randomChump(std::string name);

int main(void){

	Zombie *first_zombie = newZombie("Vadim");
	first_zombie->announce();
	randomChump("Carlos");
	delete(first_zombie);
}