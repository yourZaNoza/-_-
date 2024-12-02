#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Age.h"
using namespace age;

class IAnimal {
private:
    std::string _animalName;
    std::string _animalType;
    std::string _animalColor;
    int _animalAge;
    float _animalWeight;
public:
    // конструкторы
    IAnimal();
    IAnimal(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight);
    IAnimal(std::string animalName, std::string animalType, std::string animalColor, int animalAge);
    IAnimal(std::string animalName, std::string animalType, std::string animalColor);
    IAnimal(std::string animalName, std::string animalType);
    IAnimal(std::string animalName);

    // деструктор
    virtual ~IAnimal();

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
    virtual void readFromConsole() = 0;
    virtual void display();
    //virtual void writeToFile();
};