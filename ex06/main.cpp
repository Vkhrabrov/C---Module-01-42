/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:38:25 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/04/10 22:07:22 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
    Harl harl;
	
	if (argc != 2){
		std::cout << "You can enter just one argument" << std::endl;
		exit(1);
	}
	std::string input = argv[1];
    harl.complain(argv[1]);
    return 0;
}