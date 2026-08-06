/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:16:25 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/06 20:16:33 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_H
#define SERIALIZATION_H

#include <stdint.h>
#include <string>

struct  Data
{
    int             age;
    std::string     name;
};

class   Serialization
{
    private:
        Serialization(void);
        ~Serialization(void);
        Serialization(const Serialization &rhs);
        Serialization &operator=(const Serialization &rhs);

    public:
        static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif
