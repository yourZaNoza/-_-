#pragma once
class Human {
	private:
        const char* humanFirstName;
        const char* humanLastName;
        int humanAge;
        float humanWeight;
        float humanHeight;
    public:
        double BMI();
        int BirthYear();
        void initHuman(const char* fname, const char* lname, int age, float weight, float height);
        void displayHuman();
};