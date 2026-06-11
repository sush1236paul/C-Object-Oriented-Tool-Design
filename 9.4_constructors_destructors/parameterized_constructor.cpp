#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    int age;

    Student(std::string n, int a)
    {
        name = n;
        age = a;
    }
};

int main()
{
    Student s("Sushant", 19);

    std::cout << s.name << std::endl;
    std::cout << s.age << std::endl;

    return 0;
}
