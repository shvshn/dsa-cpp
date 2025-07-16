#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);  // takes full line input

    std::cout << "Hello, " << name << "! Welcome to C++ in WSL." << std::endl;

    return 0;
}
