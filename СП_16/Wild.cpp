#include <iostream>
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
Wild::Wild(std::string name, std::string type, std::string color, int age, float weight, std::string naturePlace) :
    Animal(name, type, color, age, weight), _naturePlace(correctAlpha(naturePlace)) {}

// делегирование конструкторов
Wild::Wild(std::string name, std::string type, std::string color, int age, int weight) :
    Animal(name, type, color, age, weight), _naturePlace("undefined") {}
Wild::Wild(std::string name, std::string type, std::string color, int age) :
    Animal(name, type, color, age, 0), _naturePlace("undefined") {}
Wild::Wild(std::string name, std::string type, std::string color) :
    Animal(name, type, color, 0, 0), _naturePlace("undefined") {}
Wild::Wild(std::string name, std::string type) :
    Animal(name, type, "undefined", 0, 0), _naturePlace("undefined") {}
Wild::Wild(std::string name) :
    Animal(name, "undefined", "undefined", 0, 0), _naturePlace("undefined") {}

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