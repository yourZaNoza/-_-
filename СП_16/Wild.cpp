#include "Wild.h"
using namespace std;

Wild::Wild() {
    setAnimalName("undefined");
    setAnimalType("undefined");
    setAnimalColor("undefined");
    setAnimalWeight(0);
    setAnimalWeight(0);
    this->_naturePlace = "undefined";
}

// список инициализации
Wild::Wild(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight, std::string naturePlace) :
    Animal(animalName, animalType, animalColor, animalAge, animalWeight), _naturePlace(correctAlpha(naturePlace)) {}

// делегирование конструкторов
Wild::Wild(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight) :
    Animal(animalName, animalType, animalColor, animalAge, animalWeight), _naturePlace("undefined") {}
Wild::Wild(std::string animalName, std::string animalType, std::string animalColor, int animalAge) :
    Animal(animalName, animalType, animalColor, animalAge, 0), _naturePlace("undefined") {}
Wild::Wild(std::string animalName, std::string animalType, std::string animalColor) :
    Animal(animalName, animalType, animalColor, 0, 0), _naturePlace("undefined") {}
Wild::Wild(std::string animalName, std::string animalType) :
    Animal(animalName, animalType, "undefined", 0, 0), _naturePlace("undefined") {}
Wild::Wild(std::string animalName) :
    Animal(animalName, "undefined", "undefined", 0, 0), _naturePlace("undefined") {}

// геттеры и сеттеры
void Wild::setNaturePlace(std::string naturePlace) {
    this->_naturePlace = correctAlpha(naturePlace);
}
std::string Wild::getNaturePlace() {
    return _naturePlace;
}

// метод
void Wild::displayNaturePlace() {
    setlocale(LC_ALL, "");
    Animal::displayAnimal();
    cout << "Среда обитания: " << _naturePlace << endl;
}