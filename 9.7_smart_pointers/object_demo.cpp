#include <iostream>
#include <memory>

class Scanner
{
public:
    void scan()
    {
        std::cout << "Scanning..." << std::endl;
    }
};

int main()
{
    auto scanner = std::make_unique<Scanner>();

    scanner->scan();

    return 0;
}
