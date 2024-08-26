/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/26 10:32:42 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_INCLUDES_ANIMAL_HPP_
#define EX01_INCLUDES_ANIMAL_HPP_

#include <iostream>
#include <string>

class Animal {
 public:
  Animal(void);
  explicit Animal(const std::string type);
  explicit Animal(const Animal &type);
  virtual ~Animal(void);
  Animal &operator=(const Animal &animal);
  virtual void   makeSound(void) const;
  virtual void   showIdeas(void) const;
  virtual void   setIdea(std::string newIdea) const;
  virtual void   setIdea(std::string newIdea, unsigned int index) const;
  std::string   const& getType(void) const;
 protected:
    std::string type;
};
#endif  //  EX01_INCLUDES_ANIMAL_HPP_
