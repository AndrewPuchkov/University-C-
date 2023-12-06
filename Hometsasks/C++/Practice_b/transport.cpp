#include <iostream>

class Transport {
protected:
    int speed; // объявление защищенного члена класса - скорость
    std::string type; // объявление защищенного члена класса - тип

public:
    Transport(int s, std::string t) : speed(s), type(t) {} // конструктор класса Transport, инициализирующий скорость и тип
    virtual void displayInfo() = 0; // Pure virtual function - чисто виртуальная функция для отображения информации о транспорте
};

class Car : public Transport { // класс Car наследуется от класса Transport
private:
    int numWheels; // объявление частного члена класса - количество колес

public:
    Car(int s, int wheels) : Transport(s, "Car"), numWheels(wheels) {} // конструктор класса Car, инициализирующий скорость, тип и количество колес

    void displayInfo() override { // переопределение виртуальной функции displayInfo
        std::cout << "Type: " << type << ", Speed: " << speed << " km/h, Number of wheels: " << numWheels << std::endl; // вывод информации о машине
    }
};

class Bicycle : public Transport { // класс Bicycle наследуется от класса Transport
private:
    int numGears; // объявление частного члена класса - количество передач

public:
    Bicycle(int s, int gears) : Transport(s, "Bicycle"), numGears(gears) {} // конструктор класса Bicycle, инициализирующий скорость, тип и количество передач

    void displayInfo() override { // переопределение виртуальной функции displayInfo
        std::cout << "Type: " << type << ", Speed: " << speed << " km/h, Number of gears: " << numGears << std::endl; // вывод информации о велосипеде
    }
};

class Motorcycle : public Transport { // класс Motorcycle наследуется от класса Transport
private:
    std::string brand; // объявление частного члена класса - марка

public:
    Motorcycle(int s, std::string b) : Transport(s, "Motorcycle"), brand(b) {} // конструктор класса Motorcycle, инициализирующий скорость, тип и марку

    void displayInfo() override { // переопределение виртуальной функции displayInfo
        std::cout << "Type: " << type << ", Speed: " << speed << " km/h, Brand: " << brand << std::endl; // вывод информации о мотоцикле
    }
};

int main() {
    Transport* vehicles[] = {new Car(120, 4), new Bicycle(25, 18), new Motorcycle(180, "Honda")}; // создание массива указателей на объекты различных типов транспорта

    for (int i = 0; i < 3; i++) { // цикл для отображения информации о каждом транспортном средстве
        vehicles[i]->displayInfo(); // вызов метода displayInfo для каждого транспортного средства
    }

    return 0;
}
