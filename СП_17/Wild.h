#pragma once
#include "Animal.h"
using namespace age;

class Wild : public Animal {
public:
    // ������������
    Wild();
    Wild(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight, std::string naturePlace);
    Wild(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight);
    Wild(std::string animalName, std::string animalType, std::string animalColor, int animalAge);
    Wild(std::string animalName, std::string animalType, std::string animalColor);
    Wild(std::string animalName, std::string animalType);
    Wild(std::string animalName);

    // ����������
    ~Wild();

    // ������� � �������
    void setNaturePlace(std::string naturePlace);
    std::string getNaturePlace();

    // �����
    void display();
private:
    std::string _naturePlace;
};

