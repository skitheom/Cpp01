/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:59:08 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/23 20:10:35 by sakitaha         ###   ########.fr       */
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
  return name.empty() ? "Unnamed Zombie" : name;
}

void Zombie::setZombieName(const std::string &name) { this->name = name; }

void Zombie::announce(void) {
  std::cout << getZombieName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
