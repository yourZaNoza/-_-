#include "Animal.h"
using namespace std;

// ����������
Animal::~Animal() {}

//������������
Animal::Animal() {
    this->_animalName = "undefined";
    this->_animalType = "undefined";
    this->_animalColor = "undefined";
    this->_animalAge = 0;
    this->_animalWeight = 0;
}

// ������ �������������
Animal::Animal(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight) : _animalName(correctAlpha(animalName)),
_animalType(correctAlpha(animalType)), _animalColor(correctAlpha(animalColor)), _animalAge(correctCount(animalAge)), _animalWeight(correctCount(animalWeight)) {}

// ������������� �������������
Animal::Animal(std::string animalName, std::string animalType, std::string animalColor, int animalAge) : Animal(animalName, animalType, animalColor, animalAge, 0) {}
Animal::Animal(std::string animalName, std::string animalType, std::string animalColor) : Animal(animalName, animalType, animalColor, 0, 0) {}
Animal::Animal(std::string animalName, std::string animalType) : Animal(animalName, animalType, "undefined", 0, 0) {}
Animal::Animal(std::string animalName) : Animal(animalName, "undefined", "undefined", 0, 0) {}

// ������������� ��������� 
Animal Animal::operator++() {
    _animalWeight += 0.52;
    return *this;
}

Animal Animal::operator--() {
    if (_animalWeight > 0)
    {
        _animalWeight -= 0.52;
        return *this;
    }
    else cout << "��� ������ 1 ��!" << endl;
}

bool Animal::operator< (Animal other) {
    return this->_animalWeight < other._animalWeight;
}

bool Animal::operator> (Animal other) {
    return this->_animalWeight > other._animalWeight;
}

ostream& operator<< (ostream& output, Animal a) {
    setlocale(LC_ALL, "");
    output << "���: " << a._animalName << endl
        << "���: " << a._animalType << endl
        << "�����: " << a._animalColor << endl
        << "�������: " << a._animalAge << endl
        << "���: " << a._animalWeight << endl
        << "\n";
    return output;
}

// ������� � �������
void Animal::setAnimalName(std::string animalName) {
    this->_animalName = correctAlpha(animalName);
}
std::string Animal::getAnimalName() {
    return _animalName;
}
void Animal::setAnimalType(std::string animalType) {
    this->_animalType = correctAlpha(animalType);
}
std::string Animal::getAnimalType() {
    return _animalType;
}
void Animal::setAnimalColor(std::string animalColor) {
    this->_animalColor = correctAlpha(animalColor);
}
std::string Animal::getAnimalColor() {
    return _animalColor;
}
void Animal::setAnimalAge(int animalAge) {
    this->_animalAge = correctCount(animalAge);
}
int Animal::getAnimalAge() {
    return _animalAge;
}
void Animal::setAnimalWeight(float animalWeight) {
    this->_animalWeight = correctCount(animalWeight);
}

float Animal::getAnimalWeight() {
    return _animalWeight;
}

// �����
void Animal::display() {
    setlocale(LC_ALL, "");
    cout << "���: " << _animalName << endl;
    cout << "���: " << _animalType << endl;
    cout << "�����: " << _animalColor << endl;
    cout << "�������: " << _animalAge << endl;
    cout << "���: " << _animalWeight << endl;
}