/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 13:22:17 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_INCLUDES_DOG_HPP_
#define EX02_INCLUDES_DOG_HPP_

#include <iostream>
#include <string>
#include "../includes/Aanimal.hpp"
#include "../includes/Brain.hpp"

class Dog : public Aanimal {
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
#endif  // EX02_INCLUDES_DOG_HPP_
