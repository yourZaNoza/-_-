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

// список инициализации
Animal::Animal(std::string name, std::string type, std::string color, int age, float weight): animalName(correctAlpha(name)), 
animalType(correctAlpha(type)), animalColor(correctAlpha(color)), animalAge(correctCount(age)), animalWeight(correctCount(weight)) {}

// делегирование конструкторов
Animal::Animal(std::string name, std::string type, std::string color, int age): Animal(animalName, animalType, animalColor, animalAge, 0) {}
Animal::Animal(std::string name, std::string type, std::string color) : Animal(animalName, animalType, animalColor, 0, 0) {}
Animal::Animal(std::string name, std::string type) : Animal(animalName, animalType, 0, 0, 0) {}
Animal::Animal(std::string name): Animal(animalName, 0, 0, 0, 0) {}

// геттеры и сеттеры
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

// метод
void Animal::displayAnimal() {
    setlocale(LC_ALL, "");
    cout << "Имя: " << animalName << endl;
    cout << "Вид: " << animalType << endl;
    cout << "Окрас: " << animalColor << endl;
    cout << "Возраст: " << animalAge << endl;
    cout << "Вес: " << animalWeight << endl;
}