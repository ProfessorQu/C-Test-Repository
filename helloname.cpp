#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::cout << "Input your name: ";
    // Set the name
    std::string name;
    std::getline(std::cin, name);

    // Print the name
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
