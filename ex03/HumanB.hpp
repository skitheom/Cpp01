/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:17:26 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/28 15:28:11 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
private:
  std::string name;
  Weapon *weapon;

public:
  HumanB(const std::string &name);
  ~HumanB();
  void setWeapon(Weapon &weapon);
  void attack() const;
};
#endif
