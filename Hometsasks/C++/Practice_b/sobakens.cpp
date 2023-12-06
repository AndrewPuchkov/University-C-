#include <iostream>
#include <string>

class Dog {
public:
    std::string name;
    int age;

    void printInfo() {
        std::cout << "Кличка: " << name << ", Возраст: " << age << std::endl;
    }
};

int main() {
    Dog dog1;
    dog1.name = "Буран";
    dog1.age = 3;

    Dog dog2;
    dog2.name = "Вега";
    dog2.age = 5;

    Dog dog3;
    dog3.name = "Тася";
    dog3.age = 2;

    std::cout << "Собакен 1: ";
    dog1.printInfo();
    std::cout << "Собакен 2: ";
    dog2.printInfo();
    std::cout << "Собакен 3: ";
    dog3.printInfo();

    return 0;
}
