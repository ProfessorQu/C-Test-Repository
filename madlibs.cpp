#include <iostream>
#include <string>

int main()
{
    std::string name_adj, name_animal,
                    rideable, verb,
                    color, noun,
                    food1, food2,
                    person, saying;

    std::cout << "Welcome to Mad Libs!" << std::endl;

    std::cout << "Enter an adjective: ";
    std::getline(std::cin, name_adj);

    std::cout << "Enter an animal: ";
    std::getline(std::cin, name_animal);

    std::cout << "Enter something you can ride: ";
    std::getline(std::cin, rideable);

    std::cout << "Enter a verb: ";
    std::getline(std::cin, verb);

    std::cout << "Enter a color: ";
    std::getline(std::cin, color);

    std::cout << "Enter a noun: ";
    std::getline(std::cin, noun);

    std::cout << "Enter a food: ";
    std::getline(std::cin, food1);

    std::cout << "Enter another food: ";
    std::getline(std::cin, food2);

    std::cout << "Enter a person: ";
    std::getline(std::cin, person);

    std::cout << "Enter a saying: ";
    std::getline(std::cin, saying);

    std::cout << "Here's your story:" << std::endl;
    std::cout << std::endl;
    std::cout << "Today I went to my favorite Taco Stand called the " << name_adj << " " << name_animal << "." << std::endl;
    std::cout << "Unlike most food stands, they cook and prepare the food in a " << rideable << " while you " << verb << "." << std::endl;
    std::cout << "The best thing on the menu is the " << color << " " << noun << "." << std::endl;
    std::cout << "Instead of ground beef they fill the taco with " << food1 << ", cheese, and top it off with a salsa made from " << food2 << "." << std::endl;
    std::cout << "If that doesn't make your mouth water, then it' just like " << person << " always says: " << saying << std::endl;
}