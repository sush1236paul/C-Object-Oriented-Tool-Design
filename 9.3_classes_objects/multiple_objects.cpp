#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
};

int main()
{
    Student s1;
    Student s2;

    s1.name = "Sushant";
    s2.name = "Batman";

    std::cout << s1.name << std::endl;
    std::cout << s2.name << std::endl;

    return 0;
}
