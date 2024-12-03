/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:47:20 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/29 17:14:22 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

const std::string Harl::levels[NUM_OF_FUNCS] = {
    "DEBUG",
    "INFO",
    "WARNING",
    "ERROR",
};

Harl::logLevel Harl::getLogLevel(const std::string &level) {
  for (int i = 0; i < NUM_OF_FUNCS; ++i) {
    if (levels[i] == level) {
      return static_cast<Harl::logLevel>(i);
    }
  }
  return Harl::INVALID;
}

void Harl::debug(void) { std::cout << "debug message" << std::endl; }

void Harl::info(void) { std::cout << "info message" << std::endl; }

void Harl::warning(void) { std::cout << "warning message" << std::endl; }

void Harl::error(void) { std::cout << "error message" << std::endl; }

void Harl::complain(std::string level) {
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

void Harl::complain(Harl::logLevel level_code) {
  void (Harl::*func[NUM_OF_FUNCS])() = {&Harl::debug, &Harl::info,
                                        &Harl::warning, &Harl::error};
  std::cout << "[ " << levels[level_code] << " ]" << std::endl;
  (this->*func[level_code])();
  std::cout << std::endl;
}

void Harl::filter(std::string level) {

  switch (getLogLevel(level)) {
  case DEBUG:
    complain(DEBUG);
  case INFO:
    complain(INFO);
  case WARNING:
    complain(WARNING);
  case ERROR:
    complain(ERROR);
    break;
  default:
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
  }
}
