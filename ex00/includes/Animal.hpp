/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 11:23:12 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_INCLUDES_ANIMAL_HPP_
#define EX00_INCLUDES_ANIMAL_HPP_

#include <iostream>
#include <string>

class Animal {
 public:
  Animal(void);
  explicit Animal(const std::string type);
  explicit Animal(const Animal &type);
  ~Animal(void);
  Animal &operator=(const Animal &animal);
  virtual void   makeSound(void) const;
  std::string   getType(void) const;
 protected:
    const std::string type;
};
#endif  //  EX00_INCLUDES_ANIMAL_HPP_
