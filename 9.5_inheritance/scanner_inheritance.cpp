#include <iostream>

class Scanner
{
public:
    void startScan()
    {
        std::cout << "Scanning target..." << std::endl;
    }
};

class PortScanner : public Scanner
{
};

int main()
{
    PortScanner ps;

    ps.startScan();

    return 0;
}
