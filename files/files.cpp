#include <iostream>
#include <fstream>

void addTextToFile(std::string text, std::string fileName)
{
    std::ofstream file;
    file.open(fileName, std::ios::app);
    file << text;
    file.close();
}

int main()
{
    for (int i = 0; i < 10; i ++) {
        addTextToFile("Hello, world!\n", "file.txt");
    }
    return 0;
}
