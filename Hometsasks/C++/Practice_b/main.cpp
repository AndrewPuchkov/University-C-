#include <iostream>

class House { // создание класса "Дом"
public:
    int numOfRooms; // атрибут "количество комнат"
    std::string address; // атрибут "адрес"
};

class Person { // создание класса "Человек"
public:
    std::string name; // атрибут "имя"
    int age; // атрибут "возраст"

};

class Resident : public Person { // создание класса "Житель" как подкласса "Человека"
private:
    House* house; // атрибут "дом"

public:
    void linkHouse(House* h) { // метод для связывания жителя с домом
        house = h;
    }
};

int main() {
    House myHouse; // создание объекта класса "Дом" с именем myHouse
    myHouse.numOfRooms = 3; // инициализация атрибута "количество комнат"
    myHouse.address = "123 Main St"; // инициализация атрибута "адрес"

    Resident john; // создание объекта класса "Житель" с именем john
    john.name = "John"; // инициализация атрибута "имя"
    john.age = 30; // инициализация атрибута "возраст"
    john.linkHouse(&myHouse); // вызов метода для связывания жителя с домом
    std::cout << "Name - " << john.name << std::endl;
    std::cout << "Age - " << john.age << std::endl;
    std::cout << "Number of rooms in the House - " << myHouse.numOfRooms << std::endl;
    std::cout << "Adress - " << myHouse.address << std::endl;

    return 0;
}

