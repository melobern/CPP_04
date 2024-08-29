/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:54:20 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 09:37:22 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDES_ICE_HPP_
#define EX03_INCLUDES_ICE_HPP_
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria {
 public:
  Ice(void);
  explicit Ice(const Ice &ice);
  Ice &operator=(const Ice &ice);
  ~Ice(void);
  virtual AMateria* clone();
  virtual void use(const ICharacter& target);
};

#endif  //  EX03_INCLUDES_ICE_HPP_
