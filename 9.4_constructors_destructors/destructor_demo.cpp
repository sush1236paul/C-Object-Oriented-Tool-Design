#include <iostream>

class Student
{
public:
    Student()
    {
        std::cout << "Constructor called" << std::endl;
    }

    ~Student()
    {
        std::cout << "Destructor called" << std::endl;
    }
};

int main()
{
    Student s;

    return 0;
}
