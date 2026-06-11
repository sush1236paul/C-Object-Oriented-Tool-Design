#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream file("output.txt");

    std::string line;

    while(getline(file, line))
    {
        std::cout << line << std::endl;
    }

    file.close();

    return 0;
}
