#include <iostream>
#include "Animal.h"
using namespace std;

// ����������
Animal::~Animal() {}

// ������������� ��������� 
Animal Animal::operator++() {
    animalWeight += 0.52;
    return *this;
}

Animal Animal::operator--() {
    if (animalWeight > 0)
    {
        animalWeight -= 0.52;
        return *this;
    }
    else cout << "��� ������ 1 ��!" << endl;
}

bool Animal::operator< (Animal other) {
    return this->animalWeight < other.animalWeight;
}

bool Animal::operator> (Animal other) {
    return this->animalWeight > other.animalWeight;
}

ostream& operator<< (ostream& output, Animal a) {
    setlocale(LC_ALL, "");
    output << "���: " << a.animalName << endl
        << "���: " << a.animalType << endl
        << "�����: " << a.animalColor << endl
        << "�������: " << a.animalAge << endl
        << "���: " << a.animalWeight << endl
        << "\n";
    return output;
}

// ������ �������������
Animal::Animal(std::string name, std::string type, std::string color, int age, float weight): animalName(correctAlpha(name)), 
animalType(correctAlpha(type)), animalColor(correctAlpha(color)), animalAge(correctCount(age)), animalWeight(correctCount(weight)) {}

// ������������� �������������
Animal::Animal(std::string name, std::string type, std::string color, int age): Animal(animalName, animalType, animalColor, animalAge, 0) {}
Animal::Animal(std::string name, std::string type, std::string color) : Animal(animalName, animalType, animalColor, 0, 0) {}
Animal::Animal(std::string name, std::string type) : Animal(animalName, animalType, 0, 0, 0) {}
Animal::Animal(std::string name): Animal(animalName, 0, 0, 0, 0) {}

// ������� � �������
void Animal::setAnimalName(std::string name) {
    this->animalName = correctAlpha(name);
}
std::string Animal::getAnimalName() {
    return animalName;
}
void Animal::setAnimalType(std::string type) {
    this->animalType = correctAlpha(type);
}
std::string Animal::getAnimalType() {
    return animalType;
}
void Animal::setAnimalColor(std::string color) {
    this->animalColor = correctAlpha(color);
}
std::string Animal::getAnimalColor() {
    return animalColor;
}
void Animal::setAnimalAge(int age) {
    this->animalAge = correctCount(age);
}
int Animal::getAnimalAge() {
    return animalAge;
}
void Animal::setAnimalWeight(float weight) {
    this->animalWeight = correctCount(weight);
}

float Animal::getAnimalWeight() {
    return animalWeight;
}

// �����
void Animal::displayAnimal() {
    setlocale(LC_ALL, "");
    cout << "���: " << animalName << endl;
    cout << "���: " << animalType << endl;
    cout << "�����: " << animalColor << endl;
    cout << "�������: " << animalAge << endl;
    cout << "���: " << animalWeight << endl;
}