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
    cout << "������� ���� ������: ";
    cin >> days;
    double newWeight = weight;
    for (int i = 0; i < days; ++i)
    {
        newWeight += 0.01;
    }
    cout << "����� ���: " << newWeight << endl;
    return newWeight;
}

void Animal::NameChange() {
    int answer;
    string newName;
    cout << "������ ������� ���? 1 - ��, 2 - ���: ";
    cin >> answer;
    if (answer == 1) {
        cout << "������� ����� ���: ";
        cin >> newName;
        cout << "�������" << endl;
        cout << "" << endl;
    }
    if (answer == 2) {
        cout << "��������� ��� ����" << endl;
        cout << "" << endl;
    }

}

void Animal::displayAnimal() {
    setlocale(LC_ALL, "");
    cout << "���: " << animalName << endl;
    cout << "���: " << animalType << endl;
    cout << "�����: " << animalColor << endl;
    cout << "�������: " << animalAge << endl;
    cout << "���: " << animalWeight << endl;
}