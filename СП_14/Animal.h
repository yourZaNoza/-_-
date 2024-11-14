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
    // ������������
    Animal() = default;
    Animal(const char* name, const char* type, const char* color, int age, float weight);
    Animal(const char* name, const char* type, const char* color, int age);
    Animal(const char* name, const char* type, const char* color);
    Animal(const char* name, const char* type);
    Animal(const char* name);

    // ����������
    ~Animal();

    // ������������� ���������
    Animal operator++();
    Animal operator--();
    bool operator< (Animal other);
    bool operator> (Animal other);
    friend std::ostream& operator<< (std::ostream& output, Animal a);

    // ������� � �������
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

    // �����
    void displayAnimal();
};