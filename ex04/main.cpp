/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:16:18 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/28 21:16:24 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

static void replaceStr(std::ifstream &inFile, std::ofstream &outFile,
                       const std::string &s1, const std::string &s2) {
  std::string line;
  while (std::getline(inFile, line)) {
    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos) {
      line.erase(pos, s1.length());
      line.insert(pos, s2);
      pos += s2.length();
    }
    outFile << line << std::endl;
  }
  if (inFile.fail() && !inFile.eof()) {
    throw std::runtime_error("Error: Failed to read from file");
  }
}

static bool validate_argv(int argc, const char *argv[]) {
  if (argc != 4) {
    std::cerr << "Error: Incorrect number of arguments" << std::endl;
    return false;
  }
  if (std::string(argv[1]).empty()) {
    std::cerr << "Error: File name cannot be empty." << std::endl;
    return false;
  }
  if (std::string(argv[2]).empty()) {
    std::cerr << "Error: Search string cannot be empty." << std::endl;
    return false;
  }
  if (std::string(argv[3]).empty()) {
    std::cerr << "Error: Replace string cannot be empty." << std::endl;
    return false;
  }
  return true;
}

int main(int argc, const char *argv[]) {
  if (!validate_argv(argc, argv)) {
    return EXIT_FAILURE;
  }

  const std::string inFileName = std::string(argv[1]);
  const std::string outFileName = std::string(argv[1]) + ".replace";

  std::ifstream inFile(inFileName);
  std::ofstream outFile(outFileName);
  try {
    if (!inFile.is_open()) {
      throw std::runtime_error("Error: Failed to open input file");
    }
    if (!outFile.is_open()) {
      throw std::runtime_error("Error: Failed to create output file");
    }
    replaceStr(inFile, outFile, argv[2], argv[3]);
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
    if (inFile.is_open())
      inFile.close();
    if (outFile.is_open())
      outFile.close();
    return EXIT_FAILURE;
  }
  inFile.close();
  outFile.close();
  return EXIT_SUCCESS;
}
