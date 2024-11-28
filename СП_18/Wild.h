#pragma once
#include "IAnimal.h"
using namespace age;

class Wild : public IAnimal {
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

    // ������������� ���������
    Wild operator++();
    Wild operator--();
    bool operator< (Wild other);
    bool operator> (Wild other);
    friend std::ostream& operator<< (std::ostream& output, Wild a);

    // ������� � �������
    void setNaturePlace(std::string naturePlace);
    std::string getNaturePlace();

    // �����
    void display();
private:
    std::string _naturePlace;
};

