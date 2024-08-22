/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 11:23:33 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_INCLUDES_CAT_HPP_
#define EX00_INCLUDES_CAT_HPP_

#include <iostream>
#include <string>
#include "../includes/Animal.hpp"

class Cat : public Animal {
 public:
  Cat(void);
  explicit Cat(const Cat &cat);
  ~Cat(void);
  Cat &operator=(const Cat &cat);
  virtual void   makeSound(void) const;
};
#endif  // EX00_INCLUDES_CAT_HPP_
