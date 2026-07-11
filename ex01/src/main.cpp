/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 18:37:28 by abidaux           #+#    #+#             */
/*   Updated: 2026/07/11 23:25:57 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

#include <iostream>

template <typename T>
void print(const T& value) {
    std::cout << value << std::endl;
}

void increment(int& value) {
    value++;
}

int main() {
    int tab[] = {1, 2, 3, 4};
    size_t length = sizeof(tab) / sizeof(tab[0]);

    std::cout << "Int array before incrementing:" << std::endl;
    ::iter(tab, length, print<int>);

    ::iter(tab, length, increment);
    
    std::cout << "Int array after incrementing:" << std::endl;
    ::iter(tab, length, print<int>);

    std::string strTab[] = {"Hello", "World", "42"};
    size_t strLength = sizeof(strTab) / sizeof(strTab[0]);

    std::cout << "String array:" << std::endl;
    ::iter(strTab, strLength, print<std::string>);
    
    return 0;
}