#include <iostream>
#include "Animal.h"
using namespace std;

// ����������
Animal::~Animal()
{
    cout << "~destr for " << animalName << endl;
}

// ������������ 
Animal::Animal(const char* name, const char* type, const char* color, int age, float weight)
{
    this->animalName = name;
    this->animalType = type;
    this->animalColor = color;
    this->animalAge = age;
    this->animalWeight = weight;
    cout << "constr for " << animalName << endl;
}

Animal::Animal(const char* name, const char* type, const char* color, int age)
{
    this->animalName = name;
    this->animalType = type;
    this->animalColor = color;
    this->animalAge = age;
    cout << "constr for " << animalName << endl;
}

Animal::Animal(const char* name, const char* type, const char* color)
{
    this->animalName = name;
    this->animalType = type;
    this->animalColor = color;
    cout << "constr for " << animalName << endl;
}

Animal::Animal(const char* name, const char* type)
{
    this->animalName = name;
    this->animalType = type;
    cout << "constr for " << animalName << endl;
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

// ������
double Animal::Feed() {
    double weight = animalWeight;
    int days;
    cout << "������� ���� ������: ";
    cin >> days;
    double newWeight = weight;
    for (int i = 0; i < days; ++i)
    {
        newWeight += 0.01;
    }
    cout << "����� ���: " << newWeight << endl;
    return newWeight;
}

void Animal::NameChange() {
    int answer;
    string newName;
    cout << "������ ������� ���? 1 - ��, 2 - ���: ";
    cin >> answer;
    if (answer == 1) {
        cout << "������� ����� ���: ";
        cin >> newName;
        cout << "�������" << endl;
        cout << "" << endl;
    }
    if (answer == 2) {
        cout << "��������� ��� ����" << endl;
        cout << "" << endl;
    }

}

void Animal::displayAnimal() {
    setlocale(LC_ALL, "");
    cout << "���: " << animalName << endl;
    cout << "���: " << animalType << endl;
    cout << "�����: " << animalColor << endl;
    cout << "�������: " << animalAge << endl;
    cout << "���: " << animalWeight << endl;
}