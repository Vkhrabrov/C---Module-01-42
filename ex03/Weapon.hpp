/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:32:43 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/04/03 22:39:37 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP


#include <iostream>
#include <string>

class Weapon{
	
	private:
		std::string _type;

	public:
		Weapon(const std::string& type);
		const std::string& getType(void) const;
		void setType(const std::string& type);
};

#endif