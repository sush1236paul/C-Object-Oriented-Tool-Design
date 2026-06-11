#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    int age;

    Student()
    {
        name = "Unknown";
        age = 0;
    }
};

int main()
{
    Student s;

    std::cout << s.name << std::endl;
    std::cout << s.age << std::endl;

    return 0;
}
