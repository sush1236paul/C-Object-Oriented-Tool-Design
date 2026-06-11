#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file("output.txt");

    file << "Hello from C++" << std::endl;

    file.close();

    return 0;
}
