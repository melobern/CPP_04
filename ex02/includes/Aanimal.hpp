/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:19 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 13:46:55 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_INCLUDES_AANIMAL_HPP_
#define EX02_INCLUDES_AANIMAL_HPP_

#include <iostream>
#include <string>

class Aanimal {
 public:
  Aanimal(void);
  explicit Aanimal(const std::string type);
  explicit Aanimal(const Aanimal &type);
  virtual ~Aanimal(void);
  Aanimal &operator=(const Aanimal &animal);
  virtual void   makeSound(void) const = 0;
  virtual void   showIdeas(void) const = 0;
  virtual void   setIdea(std::string newIdea) const = 0;
  virtual void   setIdea(std::string newIdea, unsigned int index) const = 0;
  std::string   const& getType(void) const;
 protected:
    std::string type;
};
#endif  //  EX02_INCLUDES_AANIMAL_HPP_
