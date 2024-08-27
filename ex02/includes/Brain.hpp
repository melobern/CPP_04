/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 08:13:07 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/26 09:10:40 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_INCLUDES_BRAIN_HPP_
#define EX02_INCLUDES_BRAIN_HPP_

#include <iostream>
#include <string>

class Brain {
 public:
  Brain(void);
  explicit Brain(const Brain &brain);
  virtual ~Brain(void);
  Brain &operator=(const Brain &animal);
  std::string*   getIdeas(void);
  std::string    getIdea(unsigned int index) const;
  void           setIdea(std::string idea);
  void           setIdea(std::string idea, unsigned int index);
 private:
    std::string _ideas[100];
};
#endif  //  EX02_INCLUDES_BRAIN_HPP_
