#include <iostream>

class Shape { // создание абстрактного класса "Фигура"
public:
    virtual float calculateArea() = 0; // объявление чисто виртуальной функции для расчета площади
};

class Rectangle : public Shape { // класс "Прямоугольник" реализует интерфейс "Фигура"
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {} // конструктор класса "Прямоугольник" для инициализации длины и ширины

    float calculateArea() override { // переопределение виртуальной функции для расчета площади прямоугольника
        return length * width;
    }
};

class Circle : public Shape { // класс "Круг" реализует интерфейс "Фигура"
private:
    float radius;

public:
    Circle(float r) : radius(r) {} // конструктор класса "Круг" для инициализации радиуса

    float calculateArea() override { // переопределение виртуальной функции для расчета площади круга
        return 3.14 * radius * radius;
    }
};

int main() {
    Shape* shapes[] = {new Rectangle(5, 3), new Circle(4)}; // создание массива указателей на объекты различных типов фигур

    for (int i = 0; i < 2; i++) { // цикл для вызова метода расчета площади для каждой фигуры
        std::cout << "Area: " << shapes[i]->calculateArea() << std::endl; // вызов метода calculateArea для каждой фигуры и вывод результата
    }

    return 0;
}
