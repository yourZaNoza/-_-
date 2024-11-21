#pragma once
#include <iostream>
#include <string>
#include "Animal.h"
using namespace age;

class Wild : public Animal {
private:
    std::string _naturePlace;
public:
    // конструкторы
    Wild();
    Wild(std::string name, std::string type, std::string color, int age, float weight, std::string naturePlace);
    Wild(std::string name, std::string type, std::string color, int age, int weight);
    Wild(std::string name, std::string type, std::string color, int age);
    Wild(std::string name, std::string type, std::string color);
    Wild(std::string name, std::string type);
    Wild(std::string name);

    // геттеры и сеттеры
    void setNaturePlace(std::string naturePlace);
    std::string getNaturePlace();

    // метод
    void displayNaturePlace();
};

