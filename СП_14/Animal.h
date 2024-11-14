#pragma once
#include <iostream>
#include "Age.h"
using namespace age;

class Animal {
private:
    const char* animalName;
    const char* animalType;
    const char* animalColor;
    int animalAge;
    float animalWeight;
public:
    // конструкторы
    Animal() = default;
    Animal(const char* name, const char* type, const char* color, int age, float weight);
    Animal(const char* name, const char* type, const char* color, int age);
    Animal(const char* name, const char* type, const char* color);
    Animal(const char* name, const char* type);
    Animal(const char* name);

    // деструктор
    ~Animal();

    // перегруженные операторы
    Animal operator++();
    Animal operator--();
    bool operator< (Animal other);
    bool operator> (Animal other);
    friend std::ostream& operator<< (std::ostream& output, Animal a);

    // геттеры и сеттеры
    void setAnimalName(const char* name);
    const char* getAnimalName();
    void setAnimalType(const char* type);
    const char* getAnimalType();
    void setAnimalColor(const char* color);
    const char* getAnimalColor();
    void setAnimalAge(int age);
    int getAnimalAge();
    void setAnimalWeight(float weight);
    float getAnimalWeight();

    // метод
    void displayAnimal();
};