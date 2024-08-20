/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/20 15:55:32 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_INCLUDES_DOG_HPP_
#define EX00_INCLUDES_DOG_HPP_

#include <iostream>
#include <string>
#include "../includes/Animal.hpp"

class Dog : public Animal {
 public:
  Dog(void);
  explicit Dog(const Dog &dog);
  ~Dog(void);
  Dog &operator=(const Dog &cat);
  void   makeSound(void) const;
};
#endif  // EX00_INCLUDES_DOG_HPP_
