#include "House.h"
using namespace std;

// ����������
House::~House() {}

//������������
House::House() {
    setAnimalName("undefined");
    setAnimalType("undefined");
    setAnimalColor("undefined");
    setAnimalWeight(0);
    setAnimalWeight(0);
    this->_livingPlace = "undefined";
}

// ������ �������������
House::House(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight, std::string livingPlace) :
    Animal(animalName, animalType, animalColor, animalAge, animalWeight), _livingPlace(correctAlpha(livingPlace)) {}

// ������������� �������������
House::House(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight) :
    Animal(animalName, animalType, animalColor, animalAge, animalWeight), _livingPlace("undefined") {}
House::House(std::string animalName, std::string animalType, std::string animalColor, int animalAge) :
    Animal(animalName, animalType, animalColor, animalAge, 0), _livingPlace("undefined") {}
House::House(std::string animalName, std::string animalType, std::string animalColor) :
    Animal(animalName, animalType, animalColor, 0, 0), _livingPlace("undefined") {}
House::House(std::string animalName, std::string animalType) :
    Animal(animalName, animalType, "undefined", 0, 0), _livingPlace("undefined") {}
House::House(std::string animalName) :
    Animal(animalName, "undefined", "undefined", 0, 0), _livingPlace("undefined") {}

// ������� � �������
void House::setLivingPlace(std::string livingPlace) {
    this->_livingPlace = correctAlpha(livingPlace);
}
std::string House::getLivingPlace() {
    return _livingPlace;
}

// �����
void House::display() {
    setlocale(LC_ALL, "");
    Animal::display();
    cout << "����� ����������: " << _livingPlace << "\n" << endl;
}