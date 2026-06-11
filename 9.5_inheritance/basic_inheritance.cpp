#include <iostream>

class Animal
{
public:
    void speak()
    {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal
{
};

int main()
{
    Dog d;

    d.speak();

    return 0;
}
