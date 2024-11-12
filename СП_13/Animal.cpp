#include <iostream>
#include "Animal.h"
using namespace std;

// деструктор
Animal::~Animal()
{
    cout << "~destr for " << animalName << endl;
}

// конструкторы 
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

// методы
double Animal::Feed() {
    double weight = animalWeight;
    int days;
    cout << "Сколько дней кормим: ";
    cin >> days;
    double newWeight = weight;
    for (int i = 0; i < days; ++i)
    {
        newWeight += 0.01;
    }
    cout << "Новый вес: " << newWeight << endl;
    return newWeight;
}

void Animal::NameChange() {
    int answer;
    string newName;
    cout << "Хотите сменить имя? 1 - да, 2 - нет: ";
    cin >> answer;
    if (answer == 1) {
        cout << "Введите новое имя: ";
        cin >> newName;
        cout << "Вписали" << endl;
        cout << "" << endl;
    }
    if (answer == 2) {
        cout << "Оставляем как есть" << endl;
        cout << "" << endl;
    }

}

void Animal::displayAnimal() {
    setlocale(LC_ALL, "");
    cout << "Имя: " << animalName << endl;
    cout << "Вид: " << animalType << endl;
    cout << "Окрас: " << animalColor << endl;
    cout << "Возраст: " << animalAge << endl;
    cout << "Вес: " << animalWeight << endl;
}