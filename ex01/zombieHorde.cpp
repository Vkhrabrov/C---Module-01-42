/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:58:48 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/03/14 20:49:40 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){

	Zombie *horde = new Zombie[N];
	std::string base_name = name;

	for (int i = 0; i < N; i++){
		std::string numberedName = base_name + std::to_string(i + 1);
		horde[i] = Zombie(numberedName);
		horde[i].announce();
	}
	return(horde);
}