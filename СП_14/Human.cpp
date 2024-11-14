#include <iostream>
#include "Human.h"
using namespace std;

// деструктор
Human::~Human() {}

// перегруженные операторы 
Human Human::operator++() {
    humanHeight += 10;
    return *this;
}

Human Human::operator--() {
    if (humanHeight > 0)
    {
        humanHeight -= 10;
        return *this;
    }
    else cout << "Рост меньше 10!" << endl; 
}

bool Human::operator< (Human other) {
    return this->humanHeight < other.humanHeight;
}

bool Human::operator> (Human other) {
    return this->humanHeight > other.humanHeight;
}

ostream& operator<< (ostream& output, Human h) {
    setlocale(LC_ALL, "");
    output << "Имя: " << h.humanFirstName << endl
        << "Фамилия: " << h.humanLastName << endl
        << "Возраст: " << h.humanAge << " лет" << endl
        << "Вес: " << h.humanWeight << " кг" << endl
        << "Рост: " << h.humanHeight << " см\n" << endl;
    return output;
}

// конструкторы 
Human::Human(const char* fname, const char* lname, int age, float weight, float height)
{
    this->humanFirstName = fname;
    this->humanLastName = lname;
    this->humanAge = age;
    this->humanWeight = weight;
    this->humanHeight = height;
}

Human::Human(const char* fname, const char* lname, int age, float weight)
{
    this->humanFirstName = fname;
    this->humanLastName = lname;
    this->humanAge = age;
    this->humanWeight = weight;
}

Human::Human(const char* fname, const char* lname, int age)
{
    this->humanFirstName = fname;
    this->humanLastName = lname;
    this->humanAge = age;
}

Human::Human(const char* fname, const char* lname)
{
    this->humanFirstName = fname;
    this->humanLastName = lname;
}

Human::Human(const char* fname)
{
    this->humanFirstName = fname;
    cout << "constr for " << humanFirstName << endl;
}

// геттеры и сеттеры
void Human::setHumanFirstName(const char* fname) {
    this->humanFirstName = fname;
}
const char* Human::getHumanFirstName() {
    return humanFirstName;
}
void Human::setHumanLastName(const char* lname) {
    this->humanLastName = lname;
}
const char* Human::getHumanLastName() {
    return humanLastName;
}
void Human::setHumanAge(int age) {
    this->humanAge = age;
}
int Human::getHumanAge() {
    return humanAge;
}
void Human::setHumanWeight(float weight) {
    this->humanWeight = weight;
}
float Human::getHumanWeight() {
    return humanWeight;
}
void Human::setHumanHeight(float height) {
    this->humanHeight = height;
}
float Human::getHumanHeight() {
    return humanHeight;
}

// метод

void Human::displayHuman() {
    setlocale(LC_ALL, "");
    cout << "Имя: " << humanFirstName << endl;
    cout << "Фамилия: " << humanLastName << endl;
    cout << "Возраст: " << humanAge << " лет" << endl;
    cout << "Вес: " << humanWeight << " кг" << endl;
    cout << "Рост: " << humanHeight << " см\n" << endl;
}