#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    int age;
};

int main()
{
    Student s;

    s.name = "Sushant";
    s.age = 19;

    std::cout << "Name: " << s.name << std::endl;
    std::cout << "Age: " << s.age << std::endl;

    return 0;
}
