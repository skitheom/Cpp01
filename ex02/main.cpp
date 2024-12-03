/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:51:42 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/23 22:02:53 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
  std::string strVar = "HI THIS IS BRAIN";
  std::string *strPtr = &strVar;
  std::string &strRef = strVar;

  std::cout << "<Address>" << std::endl;
  std::cout << "strVar : " << &strVar << std::endl;
  std::cout << "strPtr : " << strPtr << std::endl;
  std::cout << "strRef : " << &strRef << std::endl;

  std::cout << "<Value>" << std::endl;
  std::cout << "strVar : " << strVar << std::endl;
  std::cout << "strPtr : " << *strPtr << std::endl;
  std::cout << "strRef : " << strRef << std::endl;

  return 0;
}
