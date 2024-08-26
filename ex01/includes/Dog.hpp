/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/26 10:29:50 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_INCLUDES_DOG_HPP_
#define EX01_INCLUDES_DOG_HPP_

#include <iostream>
#include <string>
#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

class Dog : public Animal {
 public:
  Dog(void);
  explicit Dog(const Dog &dog);
  ~Dog(void);
  Dog &operator=(const Dog &cat);
  virtual void   makeSound(void) const;
  virtual void   showIdeas(void) const;
  virtual void   setIdea(std::string newIdea) const;
  virtual void   setIdea(std::string newIdea, unsigned int index) const;
  private:
   Brain*    _brain;
};
#endif  // EX01_INCLUDES_DOG_HPP_
