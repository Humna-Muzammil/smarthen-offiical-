#include <iostream>
    main() {
        int numbers[5];
        std::cout << "Enter 1st Number: ";
        std::cin >> numbers[0];
        std::cout << "Enter 2nd Number: ";
        std::cin >> numbers[1];
        std::cout << "Enter 3rd Number: ";
        std::cin >> numbers[2];
        std::cout << "Enter 4th Number: ";
        std::cin >> numbers[3];
        std::cout << "Enter 5th Number: ";
        std::cin >> numbers[4];
    
        std::cout << "The 1st element in array is: " << numbers[0] << std::endl;
        std::cout << "The last element in array is: " << numbers[4] << std::endl;
    }
