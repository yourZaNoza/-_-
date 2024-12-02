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
    IAnimal(animalName, animalType, animalColor, animalAge, animalWeight), _livingPlace(correctAlpha(livingPlace)) {}

// ������������� �������������
House::House(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight) :
    IAnimal(animalName, animalType, animalColor, animalAge, animalWeight), _livingPlace("undefined") {}
House::House(std::string animalName, std::string animalType, std::string animalColor, int animalAge) :
    IAnimal(animalName, animalType, animalColor, animalAge, 0), _livingPlace("undefined") {}
House::House(std::string animalName, std::string animalType, std::string animalColor) :
    IAnimal(animalName, animalType, animalColor, 0, 0), _livingPlace("undefined") {}
House::House(std::string animalName, std::string animalType) :
    IAnimal(animalName, animalType, "undefined", 0, 0), _livingPlace("undefined") {}
House::House(std::string animalName) :
    IAnimal(animalName, "undefined", "undefined", 0, 0), _livingPlace("undefined") {}

// ������� � �������
void House::setLivingPlace(std::string livingPlace) {
    this->_livingPlace = correctAlpha(livingPlace);
}
std::string House::getLivingPlace() {
    return _livingPlace;
}

// ������������� ��������� 
House House::operator++() {
    setAnimalWeight(getAnimalWeight() + 0.52);
    return *this;
}

House House::operator--() {
    if (getAnimalWeight() > 0)
    {
        setAnimalWeight(getAnimalWeight() - 0.52);
        return *this;
    }
    else cout << "��� ������ 1 ��!" << endl;
}

bool House::operator< (House other) {
    return this->getAnimalWeight() < other.getAnimalWeight();
}

bool House::operator> (House other) {
    return this->getAnimalWeight() > other.getAnimalWeight();
}

ostream& operator<< (ostream& output, House a) {
    setlocale(LC_ALL, "");
    output << "���: " << a.getAnimalName() << endl
        << "���: " << a.getAnimalType() << endl
        << "�����: " << a.getAnimalColor() << endl
        << "�������: " << a.getAnimalAge() << endl
        << "���: " << a.getAnimalWeight() << endl
        << "\n";
    return output;
}

// ������
void House::readFromConsole() {
    IAnimal::readFromConsole();
    cout << "������� ����� ����������: ";
    std::string place; cin >> place; setLivingPlace(place);
}

void House::display() {
    IAnimal::display();
    cout << "����� ����� ����������: " << getLivingPlace() << endl;
}

//void House::writeToFile() {
//    std::ofstream out;
//    out.open("Animal.txt", std::ios::app);
//    if (out.is_open()) {
//        out << "���: " << getAnimalName() << endl
//            << "���: " << getAnimalType() << endl
//            << "�����: " << getAnimalColor() << endl
//            << "�������: " << getAnimalAge() << endl
//            << "����� ����������: " << getLivingPlace() << endl
//            << "\n";
//    }
//    out.close();
//}