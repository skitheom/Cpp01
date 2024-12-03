/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:09:12 by sakitaha          #+#    #+#             */
/*   Updated: 2024/12/03 12:23:56 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
  std::string name;
  std::string getZombieName() const;

public:
  Zombie();
  Zombie(const std::string &name);
  ~Zombie();
  void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
