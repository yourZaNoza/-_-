#include <iostream>
#include "Animal.h"
#include "House.h"
#include "Wild.h"
using namespace std;

// ����� Animal 
// ���������� 2 ������-���������� � �������� � ����� ��������. 
// �������� � ������ - ���������� ��� ������� �� 1 ����, ������� 
// �� ����� ���� ������������ � ������������ ������. ���� ���������� ��� private.
// �������� ����������� ������������ � ������� / �������.
// �������� � ������ - ���������� ��� ������� �� 1 ������ � ��� ������ ���������� � ������.
// ����������������� ������ ��������� ��������� � main.



int main() {
    setlocale(LC_ALL, "");
    House* ani1 = new House("Hugh", "Cat", "Black", 5, 3.0, "House");
    ani1->displayPlace();
    Wild* ani2 = new Wild("Lev", "Lion", "Orange", 8, 80.0, "Savannah");
    ani2->displayNaturePlace();

    delete ani1;
    delete ani2;
    return 0;
}
