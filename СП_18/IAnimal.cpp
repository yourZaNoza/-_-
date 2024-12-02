#include "IAnimal.h"
using namespace std;

// деструктор
IAnimal::~IAnimal() {}

//конструкторы
IAnimal::IAnimal() {
    this->_animalName = "undefined";
    this->_animalType = "undefined";
    this->_animalColor = "undefined";
    this->_animalAge = 0;
    this->_animalWeight = 0;
}

// список инициализации
IAnimal::IAnimal(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight) : _animalName(correctAlpha(animalName)),
_animalType(correctAlpha(animalType)), _animalColor(correctAlpha(animalColor)), _animalAge(correctCount(animalAge)), _animalWeight(correctCount(animalWeight)) {}

// делегирование конструкторов
IAnimal::IAnimal(std::string animalName, std::string animalType, std::string animalColor, int animalAge) : IAnimal(animalName, animalType, animalColor, animalAge, 0) {}
IAnimal::IAnimal(std::string animalName, std::string animalType, std::string animalColor) : IAnimal(animalName, animalType, animalColor, 0, 0) {}
IAnimal::IAnimal(std::string animalName, std::string animalType) : IAnimal(animalName, animalType, "undefined", 0, 0) {}
IAnimal::IAnimal(std::string animalName) : IAnimal(animalName, "undefined", "undefined", 0, 0) {}

// геттеры и сеттеры
void IAnimal::setAnimalName(std::string animalName) {
    this->_animalName = correctAlpha(animalName);
}
std::string IAnimal::getAnimalName() {
    return _animalName;
}
void IAnimal::setAnimalType(std::string animalType) {
    this->_animalType = correctAlpha(animalType);
}
std::string IAnimal::getAnimalType() {
    return _animalType;
}
void IAnimal::setAnimalColor(std::string animalColor) {
    this->_animalColor = correctAlpha(animalColor);
}
std::string IAnimal::getAnimalColor() {
    return _animalColor;
}
void IAnimal::setAnimalAge(int animalAge) {
    this->_animalAge = correctCount(animalAge);
}
int IAnimal::getAnimalAge() {
    return _animalAge;
}
void IAnimal::setAnimalWeight(float animalWeight) {
    this->_animalWeight = correctCount(animalWeight);
}

float IAnimal::getAnimalWeight() {
    return _animalWeight;
}

// метод
void IAnimal::display() {
    setlocale(LC_ALL, "");
    cout << "Имя: " << _animalName << endl;
    cout << "Вид: " << _animalType << endl;
    cout << "Окрас: " << _animalColor << endl;
    cout << "Возраст: " << _animalAge << endl;
    cout << "Вес: " << _animalWeight << endl;
}
void IAnimal::readFromConsole() {
    setlocale(LC_ALL, "");
    cout << "Введите имя: " << _animalName; cin >> _animalName;
    cout << "Введите вид: " << _animalType; cin >> _animalType;
    cout << "Введите окрас: " << _animalColor; cin >> _animalColor;
    cout << "Введите возраст: " << _animalAge; cin >> _animalAge;
    cout << "Введите вес: " << _animalWeight; cin >> _animalWeight;
}
//void IAnimal::writeToFile() {}