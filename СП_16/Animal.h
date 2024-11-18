#pragma once
#include <iostream>
#include <string>
#include "Age.h"
using namespace age;

class Animal {
private:
    std::string animalName;
    std::string animalType;
    std::string animalColor;
    int animalAge;
    float animalWeight;
public:
    // ������������
    Animal();
    Animal(std::string name, std::string type, std::string color, int age, float weight);
    Animal(std::string name, std::string type, std::string color, int age);
    Animal(std::string name, std::string type, std::string color);
    Animal(std::string name, std::string type);
    Animal(std::string name);

    // ����������
    ~Animal();

    // ������������� ���������
    Animal operator++();
    Animal operator--();
    bool operator< (Animal other);
    bool operator> (Animal other);
    friend std::ostream& operator<< (std::ostream& output, Animal a);

    // ������� � �������
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

    // �����
    void displayAnimal();
};
#pragma once
