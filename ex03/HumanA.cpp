/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:28:35 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/28 15:41:05 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon)
    : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
  std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
