/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/20 15:55:32 by mbernard         ###   ########.fr       */
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
  void   makeSound(void) const;
};
#endif  // EX00_INCLUDES_CAT_HPP_
