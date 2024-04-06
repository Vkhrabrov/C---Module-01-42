/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:42:40 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/04/03 21:31:11 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB {

private:
	std::string _name;
	Weapon* _weapon;

public:
	HumanB(const std::string& name);
	void setWeapon(Weapon& weapon);
	void attack() const ;
};

#endif