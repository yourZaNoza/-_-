#include <iostream>
#include "House.h"
using namespace std;

House::House() {
    setAnimalName("undefined");
    setAnimalType("undefined");
    setAnimalColor("undefined");
    setAnimalWeight(0);
    setAnimalWeight(0);
    this->_livingPlace = "undefined";
}

// список инициализации
House::House(std::string name, std::string type, std::string color, int age, float weight, std::string livingPlace) :
    Animal(name, type, color, age, weight), _livingPlace(correctAlpha(livingPlace)) {}

// делегирование конструкторов
House::House(std::string name, std::string type, std::string color, int age, int weight) :
    Animal(name, type, color, age, weight), _livingPlace("undefined") {}
House::House(std::string name, std::string type, std::string color, int age) :
    Animal(name, type, color, age, 0), _livingPlace("undefined") {}
House::House(std::string name, std::string type, std::string color) :
    Animal(name, type, color, 0, 0), _livingPlace("undefined") {}
House::House(std::string name, std::string type) :
    Animal(name, type, "undefined", 0, 0), _livingPlace("undefined") {}
House::House(std::string name) :
    Animal(name, "undefined", "undefined", 0, 0), _livingPlace("undefined") {}

// геттеры и сеттеры
void House::setLivingPlace(std::string livingPlace) {
    this->_livingPlace = correctAlpha(livingPlace);
}
std::string House::getLivingPlace() {
    return _livingPlace;
}

// метод
void House::displayPlace() {
    setlocale(LC_ALL, "");
    Animal::displayAnimal();
    cout << "Место жительства: " << _livingPlace << endl;
}