#include <iostream>
#include "Animal.h"
using namespace std;

void Animal::initAnimal(const char* name, const char* type, const char* color, int age, float weight) {
    animalName = name;
    animalType = type;
    animalColor = color;
    animalAge = age;
    animalWeight = weight;
}

double Animal::Feed() {
    double weight = animalWeight;
    int days;
    cout << "Сколько дней кормим: ";
    cin >> days;
    double newWeight = weight;
    for (int i = 0; i < days; ++i)
    {
        newWeight += 0.01;
    }
    cout << "Новый вес: " << newWeight << endl;
    return newWeight;
}

void Animal::NameChange() {
    int answer;
    string newName;
    cout << "Хотите сменить имя? 1 - да, 2 - нет: ";
    cin >> answer;
    if (answer == 1) {
        cout << "Введите новое имя: ";
        cin >> newName;
        cout << "Вписали" << endl;
        cout << "" << endl;
    }
    if (answer == 2) {
        cout << "Оставляем как есть" << endl;
        cout << "" << endl;
    }

}

void Animal::displayAnimal() {
    setlocale(LC_ALL, "");
    cout << "Имя: " << animalName << endl;
    cout << "Вид: " << animalType << endl;
    cout << "Окрас: " << animalColor << endl;
    cout << "Возраст: " << animalAge << endl;
    cout << "Вес: " << animalWeight << endl;
}