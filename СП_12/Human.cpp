#include <iostream>
#include "Human.h"
using namespace std;

void Human::initHuman(const char* fname, const char* lname, int age, float weight, float height) {
    humanFirstName = fname;
    humanLastName = lname;
    humanAge = age;
    humanWeight = weight;
    humanHeight = height;
}

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