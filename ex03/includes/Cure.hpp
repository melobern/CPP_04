/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:54:20 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 09:37:40 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDES_CURE_HPP_
#define EX03_INCLUDES_CURE_HPP_
# include <string>
# include "AMateria.hpp"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

class Cure : public AMateria {
 public:
  Cure(void);
  explicit Cure(const Cure &cure);
  Cure &operator=(const Cure &cure);
  ~Cure(void);
  virtual AMateria* clone();
  virtual void use(const ICharacter& target);
};

#endif  //  EX03_INCLUDES_CURE_HPP_
