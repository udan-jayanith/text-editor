#include <iostream>

// Define the printBold function
void printBold() {
    std::cout << "\033[1m" << "text" << "\033[0m" << std::endl;
}


/*
    
    std::cout << "\033[1;31mThis text is red.\033[0m" << std::endl;  // Red text
    std::cout << "\033[1;32mThis text is green.\033[0m" << std::endl; // Green text
    std::cout << "\033[1;33mThis text is yellow.\033[0m" << std::endl; // Yellow text
    std::cout << "\033[1;34mThis text is blue.\033[0m" << std::endl;  // Blue text
    std::cout << "\033[1;35mThis text is magenta.\033[0m" << std::endl; // Magenta text
    std::cout << "\033[1;36mThis text is cyan.\033[0m" << std::endl;  // Cyan text 
    
 */