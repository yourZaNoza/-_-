#include "Wild.h"
using namespace std;

// ����������
Wild::~Wild() {}

//������������
Wild::Wild() {
    setAnimalName("undefined");
    setAnimalType("undefined");
    setAnimalColor("undefined");
    setAnimalWeight(0);
    setAnimalWeight(0);
    this->_naturePlace = "undefined";
}

// ������ �������������
Wild::Wild(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight, std::string naturePlace) :
    IAnimal(animalName, animalType, animalColor, animalAge, animalWeight), _naturePlace(correctAlpha(naturePlace)) {}

// ������������� �������������
Wild::Wild(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight) :
    IAnimal(animalName, animalType, animalColor, animalAge, animalWeight), _naturePlace("undefined") {}
Wild::Wild(std::string animalName, std::string animalType, std::string animalColor, int animalAge) :
    IAnimal(animalName, animalType, animalColor, animalAge, 0), _naturePlace("undefined") {}
Wild::Wild(std::string animalName, std::string animalType, std::string animalColor) :
    IAnimal(animalName, animalType, animalColor, 0, 0), _naturePlace("undefined") {}
Wild::Wild(std::string animalName, std::string animalType) :
    IAnimal(animalName, animalType, "undefined", 0, 0), _naturePlace("undefined") {}
Wild::Wild(std::string animalName) :
    IAnimal(animalName, "undefined", "undefined", 0, 0), _naturePlace("undefined") {}

// ������� � �������
void Wild::setNaturePlace(std::string naturePlace) {
    this->_naturePlace = correctAlpha(naturePlace);
}
std::string Wild::getNaturePlace() {
    return _naturePlace;
}

// ������������� ��������� 
Wild Wild::operator++() {
    setAnimalWeight(getAnimalWeight() + 0.52);
    return *this;
}

Wild Wild::operator--() {
    if (getAnimalWeight() > 0)
    {
        setAnimalWeight(getAnimalWeight() - 0.52);
        return *this;
    }
    else cout << "��� ������ 1 ��!" << endl;
}

bool Wild::operator< (Wild other) {
    return this->getAnimalWeight() < other.getAnimalWeight();
}

bool Wild::operator> (Wild other) {
    return this->getAnimalWeight() > other.getAnimalWeight();
}

ostream& operator<< (ostream& output, Wild a) {
    setlocale(LC_ALL, "");
    output << "���: " << a.getAnimalName() << endl
        << "���: " << a.getAnimalType() << endl
        << "�����: " << a.getAnimalColor() << endl
        << "�������: " << a.getAnimalAge() << endl
        << "���: " << a.getAnimalWeight() << endl
        << "\n";
    return output;
}

void Wild::readFromConsole() {
    IAnimal::readFromConsole();
    cout << "������� ����� ��������: ";
    std::string place; cin >> place; setNaturePlace(place);
}

void Wild::display() {
    IAnimal::display();
    cout << "����� ����� ��������: " << getNaturePlace() << endl;
}

//void Wild::writeToFile() {
//    std::ofstream out;
//    out.open("Animal.txt", std::ios::app);
//    if (out.is_open()) {
//        out << "���: " << getAnimalName() << endl
//            << "���: " << getAnimalType() << endl
//            << "�����: " << getAnimalColor() << endl
//            << "�������: " << getAnimalAge() << endl
//            << "����� ��������: " << getNaturePlace() << endl
//            << "\n";
//    }
//    out.close();
//}