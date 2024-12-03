/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:10:44 by sakitaha          #+#    #+#             */
/*   Updated: 2024/12/03 15:17:00 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>
#include <limits>
#include <sstream>

static void fatalError(const char *errorMsg) {
  std::cerr << errorMsg << std::endl;
  exit(EXIT_FAILURE);
}

static std::string getInputStr(const std::string &prompt) {
  std::string userInput;

  while (true) {
    std::cout << prompt;
    if (!std::getline(std::cin, userInput)) {
      if (std::cin.eof())
        fatalError("EOF");
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Error: Failed to receive input" << std::endl;
      continue;
    }
    return userInput;
  }
}

static int getInputNum(const std::string &prompt) {
  int num;

  while (true) {
    std::cout << prompt;
    std::cin >> num;
    if (std::cin.eof())
      fatalError("EOF");
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std ::streamsize>::max(), '\n');
      std::cout << "Error: Failed to receive input" << std::endl;
      continue;
    }
    if (num < 1 || 100 < num) {
      std::cout << "Error: Number must be between 1 and 100" << std::endl;
      continue;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return num;
  }
}

int main(void) {
  int n = getInputNum("Number of zombies: ");
  Zombie *zombies = zombieHorde(n, getInputStr("Name of your zombies: "));
  if (!zombies) {
    std::cerr << "Error: Failed to create zombie horde" << std::endl;
    return EXIT_FAILURE;
  }
  for (int i = 0; i < n; i++) {
    zombies[i].announce();
  }
  delete[] zombies;
  return EXIT_SUCCESS;
}
