#pragma once
#include <iostream>
#include <string>
#include "Age.h"
using namespace age;

class Animal {
private:
    std::string _animalName;
    std::string _animalType;
    std::string _animalColor;
    int _animalAge;
    float _animalWeight;
public:
    // конструкторы
    Animal();
    Animal(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight);
    Animal(std::string animalName, std::string animalType, std::string animalColor, int animalAge);
    Animal(std::string animalName, std::string animalType, std::string animalColor);
    Animal(std::string animalName, std::string animalType);
    Animal(std::string animalName);

    // деструктор
    virtual ~Animal();

    // перегруженные операторы
    Animal operator++();
    Animal operator--();
    bool operator< (Animal other);
    bool operator> (Animal other);
    friend std::ostream& operator<< (std::ostream& output, Animal a);

    // геттеры и сеттеры
    void setAnimalName(std::string name);
    std::string getAnimalName();
    void setAnimalType(std::string type);
    std::string getAnimalType();
    void setAnimalColor(std::string color);
    std::string getAnimalColor();
    void setAnimalAge(int age);
    int getAnimalAge();
    void setAnimalWeight(float weight);
    float getAnimalWeight();

    // метод
    virtual void display();
};