/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 18:37:37 by abidaux           #+#    #+#             */
/*   Updated: 2026/07/11 20:04:47 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template <typename T, typename F>
void iter(T* array, size_t lengh, F function) {
    if (!array || lengh == 0)
        return;
    for (size_t i = 0; i < lengh; i++) {
        function(array[i]);
    }
}

template <typename T, typename F>
void iter(const T* array, size_t lengh, F function) {
    if (!array || lengh == 0)
        return;
    for (size_t i = 0; i < lengh; i++) {
        function(array[i]);
    }
}