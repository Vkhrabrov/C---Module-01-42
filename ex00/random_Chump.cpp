/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_Chump.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:01:48 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/03/13 20:44:00 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name){
	
	Zombie zombie = Zombie(name);
	zombie.announce();
}