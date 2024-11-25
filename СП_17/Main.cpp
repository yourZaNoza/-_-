#include <iostream>
#include "Animal.h"
#include "House.h"
#include "Wild.h"
using namespace std;

// ����� Animal 
// ���������� ����������� ������� � ������������ ������ ������������, 
// ��� ������������� �������������� �� � �������� ������� (���������� ������������). 
// ��������� �������� ������ �������������.
// ����������������� ������ ��������� ��������� � main � ������� �������, 
// ���������� � ����� For : �������� �� 2 ������� �������� �������(1 �����������, 1 ������������) 
// � ��������� � ��� ���������������� �������.


int main() {
    House ani1("Hugh", "Cat", "Black", 5, 3.0, "House");
    /*Animal* pAni1 = &ani1;
    pAni1->display();*/

    Wild* ani2 = new Wild("Lev", "Lion", "Orange", 8, 80.8, "Savannah");
    /*ani2->display();*/

    Animal** arr = new Animal * [2] {&ani1, ani2};
    for (int i = 0; i < 2; ++i)
    {
        arr[i]->display();
    }

    delete ani2;
    delete[] arr;
    return 0;
}
