#pragma once
#include <iostream>
#include "Age.h"
using namespace age;

class Human {
private:
    // ����
    const char* humanFirstName;
    const char* humanLastName;
    int humanAge;
    float humanWeight;
    float humanHeight;
public:
    // ������������
    Human() = default;
    Human(const char* fname, const char* lname, int age, float weight, float height);
    Human(const char* fname, const char* lname, int age, float weight);
    Human(const char* fname, const char* lname, int age);
    Human(const char* fname, const char* lname);
    Human(const char* fname);

    // ����������
    ~Human();

    // ������������� ���������
    Human operator++();
    Human operator--();
    bool operator< (Human other);
    bool operator> (Human other);
    friend std::ostream &operator<< (std::ostream& output, Human h);

    // ������� � �������
    void setHumanFirstName(const char* fname);
    const char* getHumanFirstName();
    void setHumanLastName(const char* lname);
    const char* getHumanLastName();
    void setHumanAge(int age);
    int getHumanAge();
    void setHumanWeight(float weight);
    float getHumanWeight();
    void setHumanHeight(float height);
    float getHumanHeight();

    // �����
    void displayHuman();
};