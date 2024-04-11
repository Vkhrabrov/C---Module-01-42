/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:38:49 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/04/10 22:09:48 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level){
	
	int i;

	void (Harl::*complainFunctions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			break;
	}

	switch(i){
		case 0:
			(this->*complainFunctions[i++])();
		case 1:
			(this->*complainFunctions[i++])();
		case 2:
			(this->*complainFunctions[i++])();
		case 3:
			(this->*complainFunctions[i++])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
	}
}

void Harl::debug(void){
	std::cout << "[ DEBUG ]" << std::endl
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl << std::endl;
}

void Harl::info(void){
	std::cout << "[ INFO ]" << std::endl
	<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl << std::endl;
}

void Harl::warning(void){
	std::cout << "[ WARNING ]" << std::endl
	<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
	<< std::endl << std::endl;
}

void Harl::error(void){
	std::cout << "[ ERROR ]" << std::endl
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl << std::endl;
}