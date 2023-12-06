#include <iostream>

class Fruit {
public:
    virtual void getVitamins() = 0; // Pure virtual function
};

class Apple : public Fruit {
public:
    void getVitamins() override {
        std::cout << "Apple contains vitamin A and C" << std::endl;
    }
};

class Orange : public Fruit {
public:
    void getVitamins() override {
        std::cout << "Orange contains vitamin C" << std::endl;
    }
};

int main() {
    Fruit* fruits[] = {new Apple(), new Orange()};

    for (int i = 0; i < 2; i++) {
        fruits[i]->getVitamins();
    }

    return 0;
}
