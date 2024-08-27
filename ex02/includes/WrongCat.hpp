/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 13:23:05 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_INCLUDES_WRONGCAT_HPP_
#define EX02_INCLUDES_WRONGCAT_HPP_

#include <iostream>
#include <string>
#include "../includes/WrongAanimal.hpp"
#include "../includes/Brain.hpp"

class WrongCat : public WrongAanimal {
 public:
  WrongCat(void);
  explicit WrongCat(const WrongCat &cat);
  ~WrongCat(void);
  WrongCat &operator=(const WrongCat &cat);
  void   makeSound(void) const;
  void   showIdeas(void) const;
  void   setIdea(std::string newIdea) const;
  void   setIdea(std::string newIdea, unsigned int index) const;
 private:
  Brain*    _brain;
};
#endif  // EX02_INCLUDES_WRONGCAT_HPP_
