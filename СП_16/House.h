#pragma once
#include <iostream>
#include <string>
#include "Animal.h"
using namespace age;

class House : public Animal {
private:
    std::string _livingPlace;
public:
    // ������������
    House();
    House(std::string name, std::string type, std::string color, int age, float weight, std::string livingPlace);
    House(std::string name, std::string type, std::string color, int age, int weight);
    House(std::string name, std::string type, std::string color, int age);
    House(std::string name, std::string type, std::string color);
    House(std::string name, std::string type);
    House(std::string name);

    // ������� � �������
    void setLivingPlace(std::string livingPlace);
    std::string getLivingPlace(); 

    // �����
    void displayPlace();
};

