#include <iostream>

class Scanner
{
public:
    void startScan()
    {
        std::cout << "Scanning..." << std::endl;
    }
};

class PortScanner : public Scanner
{
public:
    void scanPorts()
    {
        std::cout << "Checking ports..." << std::endl;
    }
};

int main()
{
    PortScanner ps;

    ps.startScan();
    ps.scanPorts();

    return 0;
}
