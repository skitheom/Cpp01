/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 03:08:07 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/28 15:50:22 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon() : type("") {}

Weapon::Weapon(const std::string &type) : type(type) {}

Weapon::~Weapon() {}

const std::string &Weapon::getType() const { return type; }

void Weapon::setType(const std::string &newType) { type = newType; }
