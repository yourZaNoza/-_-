#pragma once
class Animal {
private:
    const char* animalName;
    const char* animalType;
    const char* animalColor;
    int animalAge;
    float animalWeight;
public:
    double Feed();
    void NameChange();
    void initAnimal(const char* name, const char* type, const char* color, int age, float weight);
    void displayAnimal();
};