#include <iostream>
#include "Human.h"
using namespace std;

// деструктор
Human::~Human()
{
    cout << "~destr for " << humanFirstName << endl;
}

// конструкторы 
Human::Human(const char* fname, const char* lname, int age, float weight, float height)
{
    this->humanFirstName = fname;
    this->humanLastName = lname;
    this->humanAge = age;
    this->humanWeight = weight;
    this->humanHeight = height;
    cout << "constr for " << humanFirstName << endl;
}

Human::Human(const char* fname, const char* lname, int age, float weight)
{
    this->humanFirstName = fname;
    this->humanLastName = lname;
    this->humanAge = age;
    this->humanWeight = weight;
    cout << "constr for " << humanFirstName << endl;
}

Human::Human(const char* fname, const char* lname, int age)
{
    this->humanFirstName = fname;
    this->humanLastName = lname;
    this->humanAge = age;
    cout << "constr for " << humanFirstName << endl;
}

Human::Human(const char* fname, const char* lname)
{
    this->humanFirstName = fname;
    this->humanLastName = lname;
    cout << "constr for " << humanFirstName << endl;
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

// методы
double Human::BMI() {
    double weight = humanWeight;
    double height = humanHeight;
    cout << "Body mass index: " << (weight / 2.205) / ((height / 39.37) * 2) << endl;
    return (weight / 2.205) / ((height / 39.37) * 2);
}

int Human::BirthYear() {
    int currentYear = 2024;
    cout << "BirthYear: " << currentYear - humanAge << endl;
    return currentYear - humanAge;
}

void Human::displayHuman() {
    setlocale(LC_ALL, "");
    cout << "Имя: " << humanFirstName << endl;
    cout << "Фамилия: " << humanLastName << endl;
    cout << "Возраст: " << humanAge << " лет" << endl;
    cout << "Вес: " << humanWeight << " кг" << endl;
    cout << "Рост: " << humanHeight << " см" << endl;
    cout << "" << endl;
}