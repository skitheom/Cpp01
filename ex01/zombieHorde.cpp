/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:54:28 by sakitaha          #+#    #+#             */
/*   Updated: 2024/12/03 15:27:58 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <sstream>
#include <string>

Zombie *zombieHorde(int N, std::string name) {
  if (N <= 0) {
    std::cerr << "Error: Number must be greater than 0" << std::endl;
    return NULL;
  }
  Zombie *horde = new (std::nothrow) Zombie[N];
  if (!horde) {
    std::cerr << "Error: Memory allocation failed for zombies" << std::endl;
    return NULL;
  }
  for (int i = 0; i < N; i++) {
    std::stringstream ss;
    ss << name << "[" << i << "]";
    std::string zombieNameWithNo = ss.str();
    horde[i].setZombieName(zombieNameWithNo);
  }
  return horde;
}
