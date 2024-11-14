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

// ������������ 
Animal::Animal(const char* name, const char* type, const char* color, int age, float weight)
{
    this->animalName = name;
    this->animalType = type;
    this->animalColor = color;
    this->animalAge = age;
    this->animalWeight = weight;
}

Animal::Animal(const char* name, const char* type, const char* color, int age)
{
    this->animalName = name;
    this->animalType = type;
    this->animalColor = color;
    this->animalAge = age;
}

Animal::Animal(const char* name, const char* type, const char* color)
{
    this->animalName = name;
    this->animalType = type;
    this->animalColor = color;
}

Animal::Animal(const char* name, const char* type)
{
    this->animalName = name;
    this->animalType = type;
}

Animal::Animal(const char* name)
{
    this->animalName = name;
    cout << "constr for " << animalName << endl;
}

// ������� � �������
void Animal::setAnimalName(const char* name) {
    this->animalName = name;
}
const char* Animal::getAnimalName() {
    return animalName;
}
void Animal::setAnimalType(const char* type) {
    this->animalType = type;
}
const char* Animal::getAnimalType() {
    return animalType;
}
void Animal::setAnimalColor(const char* color) {
    this->animalColor = color;
}
const char* Animal::getAnimalColor() {
    return animalColor;
}
void Animal::setAnimalAge(int age) {
    this->animalAge = age;
}
int Animal::getAnimalAge() {
    return animalAge;
}
void Animal::setAnimalWeight(float weight) {
    this->animalWeight = weight;
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