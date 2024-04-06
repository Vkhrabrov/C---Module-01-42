/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:58:10 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/04/04 21:54:58 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{

private:
	std::string _name;
public:
	Zombie() {};
	// Zombie* zombieHorde(int N, std::string name);
	Zombie (std::string name);
	// ~Zombie(void);
	void announce(void);
	// ~Zombie(void);
};

#endif
