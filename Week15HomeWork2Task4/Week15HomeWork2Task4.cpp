//Задание 4. Написать программу, которая заменяет все
//символы точки «.» в строке, введенной пользователем,
//на символы восклицательного знака «!».

#include <iostream>
#include <string>
#include <cstring>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{

    //////////////////0123456789
    string arrstring("qweeee.rty12344.");
    cout << "Before replace symb\n" << arrstring;

    cout << "\n\nenter the character you want to replace\n";
    char s;
    cin >> s;

    cout << "\nenter the character which one you want to replace\n";
    char v;
    cin >> v;

    replace(arrstring.begin(), arrstring.end(), s, v); // replace all 'x' to 'y'
   /* string rez3 = count(arrstring.begin(), arrstring.end(), s);
    cout<< rez3;
    for (int i = 0; i < arrstring.length(); i++) {

    }
    arrstring.replace(arrstring.find(s), s.length(), v);*/
    cout << "after replace  symb\n" << arrstring;

}