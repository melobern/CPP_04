/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 11:23:56 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_INCLUDES_WRONGANIMAL_HPP_
#define EX00_INCLUDES_WRONGANIMAL_HPP_

#include <iostream>
#include <string>

class WrongAnimal {
 public:
  WrongAnimal(void);
  explicit WrongAnimal(const std::string type);
  explicit WrongAnimal(const WrongAnimal &type);
  ~WrongAnimal(void);
  WrongAnimal &operator=(const WrongAnimal &animal);
  void   makeSound(void) const;
  std::string   getType(void) const;
 protected:
    std::string type;
};
#endif  //  EX00_INCLUDES_WRONGANIMAL_HPP_
