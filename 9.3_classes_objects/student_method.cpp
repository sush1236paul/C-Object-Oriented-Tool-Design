#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    int age;

    void introduce()
    {
        std::cout << "Hello, I am "
                  << name
                  << std::endl;
    }
};

int main()
{
    Student s;

    s.name = "Sushant";
    s.age = 19;

    s.introduce();

    return 0;
}
