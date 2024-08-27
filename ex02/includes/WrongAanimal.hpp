/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAanimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 13:47:49 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_INCLUDES_WRONGAANIMAL_HPP_
#define EX02_INCLUDES_WRONGAANIMAL_HPP_

#include <iostream>
#include <string>

class WrongAanimal {
 public:
  WrongAanimal(void);
  explicit WrongAanimal(const std::string type);
  explicit WrongAanimal(const WrongAanimal &type);
  virtual ~WrongAanimal(void);
  WrongAanimal &operator=(const WrongAanimal &animal);
  virtual void   makeSound(void) const;
  virtual void   showIdeas(void) const;
  virtual void   setIdea(std::string newIdea) const;
  virtual void   setIdea(std::string newIdea, unsigned int index) const;
  std::string   getType(void) const;
 protected:
  std::string type;
};
#endif  //  EX02_INCLUDES_WRONGAANIMAL_HPP_
