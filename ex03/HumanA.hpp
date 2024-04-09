/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:39:17 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/04/09 00:08:59 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

private:
	std::string _name;
	Weapon& _weapon;

public:
	HumanA(const std::string& name, Weapon& weapon); 
	void attack() const;
};

#endif