#include <iostream>
#include "Human.h"
using namespace std;

// ����������
Human::~Human() {}

// ������������� ��������� 
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
    else cout << "���� ������ 10!" << endl; 
}

bool Human::operator< (Human other) {
    return this->humanHeight < other.humanHeight;
}

bool Human::operator> (Human other) {
    return this->humanHeight > other.humanHeight;
}

ostream& operator<< (ostream& output, Human h) {
    setlocale(LC_ALL, "");
    output << "���: " << h.humanFirstName << endl
        << "�������: " << h.humanLastName << endl
        << "�������: " << h.humanAge << " ���" << endl
        << "���: " << h.humanWeight << " ��" << endl
        << "����: " << h.humanHeight << " ��\n" << endl;
    return output;
}

// ������������ 
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

// ������� � �������
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

// �����

void Human::displayHuman() {
    setlocale(LC_ALL, "");
    cout << "���: " << humanFirstName << endl;
    cout << "�������: " << humanLastName << endl;
    cout << "�������: " << humanAge << " ���" << endl;
    cout << "���: " << humanWeight << " ��" << endl;
    cout << "����: " << humanHeight << " ��\n" << endl;
}