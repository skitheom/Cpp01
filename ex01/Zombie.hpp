/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:54:30 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/23 20:10:31 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
  std::string name;

public:
  Zombie();
  Zombie(const std::string &name);
  ~Zombie();
  std::string getZombieName() const;
  void setZombieName(const std::string &name);
  void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif
