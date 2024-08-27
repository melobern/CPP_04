/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 13:22:56 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_INCLUDES_WRONGANIMAL_HPP_
#define EX01_INCLUDES_WRONGANIMAL_HPP_

#include <iostream>
#include <string>

class WrongAnimal {
 public:
  WrongAnimal(void);
  explicit WrongAnimal(const std::string type);
  explicit WrongAnimal(const WrongAnimal &type);
  virtual ~WrongAnimal(void);
  WrongAnimal &operator=(const WrongAnimal &animal);
  void   makeSound(void) const;
  void   showIdeas(void) const;
  void   setIdea(std::string newIdea) const;
  void   setIdea(std::string newIdea, unsigned int index) const;
  std::string   getType(void) const;
 protected:
  std::string type;
};
#endif  //  EX01_INCLUDES_WRONGANIMAL_HPP_
