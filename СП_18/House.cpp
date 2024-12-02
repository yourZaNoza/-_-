#include "House.h"
using namespace std;

// деструктор
House::~House() {}

//конструкторы
House::House() {
    setAnimalName("undefined");
    setAnimalType("undefined");
    setAnimalColor("undefined");
    setAnimalWeight(0);
    setAnimalWeight(0);
    this->_livingPlace = "undefined";
}

// список инициализации
House::House(std::string animalName, std::string animalType, std::string animalColor, int animalAge, float animalWeight, std::string livingPlace) :
    IAnimal(animalName, animalType, animalColor, animalAge, animalWeight), _livingPlace(correctAlpha(livingPlace)) {}

// делегирование конструкторов
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

// геттеры и сеттеры
void House::setLivingPlace(std::string livingPlace) {
    this->_livingPlace = correctAlpha(livingPlace);
}
std::string House::getLivingPlace() {
    return _livingPlace;
}

// перегруженные операторы 
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
    else cout << "Вес меньше 1 кг!" << endl;
}

bool House::operator< (House other) {
    return this->getAnimalWeight() < other.getAnimalWeight();
}

bool House::operator> (House other) {
    return this->getAnimalWeight() > other.getAnimalWeight();
}

ostream& operator<< (ostream& output, House a) {
    setlocale(LC_ALL, "");
    output << "Имя: " << a.getAnimalName() << endl
        << "Вид: " << a.getAnimalType() << endl
        << "Окрас: " << a.getAnimalColor() << endl
        << "Возраст: " << a.getAnimalAge() << endl
        << "Вес: " << a.getAnimalWeight() << endl
        << "\n";
    return output;
}

// методы
void House::readFromConsole() {
    IAnimal::readFromConsole();
    cout << "Введите место жительства: ";
    std::string place; cin >> place; setLivingPlace(place);
}

void House::display() {
    IAnimal::display();
    cout << "Новое место жительства: " << getLivingPlace() << endl;
}

//void House::writeToFile() {
//    std::ofstream out;
//    out.open("Animal.txt", std::ios::app);
//    if (out.is_open()) {
//        out << "Имя: " << getAnimalName() << endl
//            << "Вид: " << getAnimalType() << endl
//            << "Окрас: " << getAnimalColor() << endl
//            << "Возраст: " << getAnimalAge() << endl
//            << "Место жительства: " << getLivingPlace() << endl
//            << "\n";
//    }
//    out.close();
//}