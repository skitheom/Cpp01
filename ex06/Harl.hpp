/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:47:01 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/29 17:12:16 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
private:
  static const int NUM_OF_FUNCS = 4;
  static const std::string levels[NUM_OF_FUNCS];

  enum logLevel { DEBUG, INFO, WARNING, ERROR, INVALID };
  logLevel getLogLevel(const std::string &level);

  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

public:
  void complain(std::string level);
  void complain(Harl::logLevel level_code);
  void filter(std::string level);
};

#endif
