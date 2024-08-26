/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/26 10:19:40 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_INCLUDES_CAT_HPP_
#define EX01_INCLUDES_CAT_HPP_

#include <iostream>
#include <string>
#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

class Cat : public Animal {
 public:
  Cat(void);
  explicit Cat(const Cat &cat);
  ~Cat(void);
  Cat &operator=(const Cat &cat);
  virtual void   makeSound(void) const;
  virtual void   showIdeas(void) const;
  virtual void   setIdea(std::string newIdea) const;
  virtual void   setIdea(std::string newIdea, unsigned int index) const;
  private:
   Brain*    _brain;
};
#endif  // EX01_INCLUDES_CAT_HPP_
