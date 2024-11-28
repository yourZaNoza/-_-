#pragma once
#include "IAnimal.h"
using namespace age;

class House : public IAnimal {
public:
    // ������������
    House();
    House(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight, std::string livingPlace);
    House(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight);
    House(std::string animalName, std::string animalType, std::string animalColor, int animalAge);
    House(std::string animalName, std::string animalType, std::string animalColor);
    House(std::string animalName, std::string animalType);
    House(std::string animalName);

    // ����������
    ~House();

    // ������������� ���������
    House operator++();
    House operator--();
    bool operator< (House other);
    bool operator> (House other);
    friend std::ostream& operator<< (std::ostream& output, House a);

    // ������� � �������
    void setLivingPlace(std::string livingPlace);
    std::string getLivingPlace();

    // �����
    void display();
private:
    std::string _livingPlace;
};

