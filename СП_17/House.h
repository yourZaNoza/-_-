#pragma once
#include "Animal.h"
using namespace age;

class House : public Animal {
public:
    // конструкторы
    House();
    House(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight, std::string livingPlace);
    House(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight);
    House(std::string animalName, std::string animalType, std::string animalColor, int animalAge);
    House(std::string animalName, std::string animalType, std::string animalColor);
    House(std::string animalName, std::string animalType);
    House(std::string animalName);

    // деструктор
    ~House();

    // геттеры и сеттеры
    void setLivingPlace(std::string livingPlace);
    std::string getLivingPlace();

    // метод
    void display();
private:
    std::string _livingPlace;
};

