/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:05:02 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/29 15:13:15 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

const int NUM_OF_FUNCS = 4;

void Harl::debug(void) { std::cout << "debug message" << std::endl; }

void Harl::info(void) { std::cout << "info message" << std::endl; }

void Harl::warning(void) { std::cout << "warning message" << std::endl; }

void Harl::error(void) { std::cout << "error message" << std::endl; }

void Harl::complain(std::string level) {
  const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::*func[NUM_OF_FUNCS])() = {&Harl::debug, &Harl::info,
                                        &Harl::warning, &Harl::error};

  for (int i = 0; i < NUM_OF_FUNCS; i++) {
    if (levels[i] == level) {
      (this->*func[i])();
      return;
    }
  }
  std::cout << "Invalid level: " << level << std::endl;
}
