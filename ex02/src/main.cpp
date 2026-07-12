#include <iostream>
#include "Array.hpp"

int main() {
    Array<int> empty;
    Array<int> numbers(5);
    
    std::cout << "--- TEST SIZE & INIT ---" << std::endl;
    std::cout << "Taille tableau vide : " << empty.size() << std::endl;
    std::cout << "Taille tableau 5 elements : " << numbers.size() << std::endl;
    std::cout << "Valeur par defaut index 0 : " << numbers[0] << " (attendu: 0)" << std::endl;

    std::cout << "\n--- TEST COPIE PROFONDE ---" << std::endl;
    numbers[0] = 42;
    Array<int> copy(numbers);
    Array<int> assigned;
    assigned = numbers;
    
    copy[0] = 100;
    assigned[0] = 200;
    
    std::cout << "Valeur original  : " << numbers[0] << " (attendu: 42)" << std::endl;
    std::cout << "Valeur copie     : " << copy[0] << " (attendu: 100)" << std::endl;
    std::cout << "Valeur assignee  : " << assigned[0] << " (attendu: 200)" << std::endl;

    std::cout << "\n--- TEST EXCEPTION HORS LIMITES ---" << std::endl;
    try {
        std::cout << "Tentative acces index 10 sur tableau de taille 5..." << std::endl;
        numbers[10] = 0;
    } catch (const std::exception& e) {
        std::cout << "Succes ! Exception capturee : " << e.what() << std::endl;
    }

    return 0;
}