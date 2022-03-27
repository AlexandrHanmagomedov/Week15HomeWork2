//Задание 6. Пользователь вводит строку.Определить количество букв, количество цифр и количество
//  остальных
//символов, присутствующих в строке.
#include <iostream>
#include <string>
#include <cstring>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main() {

        int count = 0, digit = 0, letter = 0;
        string arrstring("qweeee.rty12344.");

        while (arrstring[count])
        {
            if (arrstring[count] >= '0' && arrstring[count] <= '9') {
                digit++;
            }
            else if ((arrstring[count] >= 'a' && arrstring[count] <= 'z') ||
                     (arrstring[count] >= 'A' && arrstring[count] <= 'Z')) {
                      letter++;
            }
            count++;
        }

        cout << "String \n" << arrstring << "\ndigit=" << digit <<
                "\nletter="<< letter << "\nother=" <<
                    count - digit - letter << "\n";

        system("pause");
        return 0;
   
}