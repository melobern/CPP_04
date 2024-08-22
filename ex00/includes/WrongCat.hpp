/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 11:24:06 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_INCLUDES_WRONGCAT_HPP_
#define EX00_INCLUDES_WRONGCAT_HPP_

#include <iostream>
#include <string>
#include "../includes/WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat(void);
  explicit WrongCat(const WrongCat &cat);
  ~WrongCat(void);
  WrongCat &operator=(const WrongCat &cat);
  void   makeSound(void) const;
};
#endif  // EX00_INCLUDES_WRONGCAT_HPP_
