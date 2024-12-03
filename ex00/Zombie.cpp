/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:08:56 by sakitaha          #+#    #+#             */
/*   Updated: 2024/12/03 12:18:26 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("") {}

Zombie::Zombie(const std::string &name) : name(name) {}

Zombie::~Zombie() {
  std::cout << getZombieName() << " is destroyed" << std::endl;
}

std::string Zombie::getZombieName() const {
  return (name.empty() ? "Unnamed Zombie" : name);
}

void Zombie::announce(void) {
  std::cout << getZombieName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
