#include <iostream>
#include "Animal.h"
using namespace std;

// деструктор
Animal::~Animal() {}

// перегруженные операторы 
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
    else cout << "Вес меньше 1 кг!" << endl;
}

bool Animal::operator< (Animal other) {
    return this->animalWeight < other.animalWeight;
}

bool Animal::operator> (Animal other) {
    return this->animalWeight > other.animalWeight;
}

ostream& operator<< (ostream& output, Animal a) {
    setlocale(LC_ALL, "");
    output << "Имя: " << a.animalName << endl
        << "Вид: " << a.animalType << endl
        << "Окрас: " << a.animalColor << endl
        << "Возраст: " << a.animalAge << endl
        << "Вес: " << a.animalWeight << endl
        << "\n";
    return output;
}

// конструкторы 
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

// геттеры и сеттеры
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

// метод
void Animal::displayAnimal() {
    setlocale(LC_ALL, "");
    cout << "Имя: " << animalName << endl;
    cout << "Вид: " << animalType << endl;
    cout << "Окрас: " << animalColor << endl;
    cout << "Возраст: " << animalAge << endl;
    cout << "Вес: " << animalWeight << endl;
}