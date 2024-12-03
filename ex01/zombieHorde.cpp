/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:54:28 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/23 20:10:24 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name) {
  if (N <= 0) {
    std::cerr << "Error: Number must be greater than 0" << std::endl;
    return nullptr;
  }

  Zombie *horde = new Zombie[N];

  for (int i = 0; i < N; i++) {
    horde[i].setZombieName(name);
  }
  return horde;
}
