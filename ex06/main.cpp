/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:48:27 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/29 16:09:57 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, const char *argv[]) {

  if (argc != 2) {
    std::cerr << "Error: Invalid number of arguments" << std::endl;
    std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
    return 1;
  }
  Harl harl;
  harl.filter(argv[1]);
  return 0;
}
