//Задание 2. Написать функцию, которая удаляет из строки
//все вхождения в нее заданного символа
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>

    int main()
    {
        using namespace std;
        ////////////////////0123456789
        string arrstring ("qweeeeerty1234444444");
        cout << "Before del symb\n" << arrstring;

        cout << "\n\nenter sumb you want to delete \n";
        char s;
        cin >> s;

        int rez = arrstring.find(s);

        int rez3 = count(arrstring.begin(), arrstring.end(), s);

        for (int i = 0; i < rez3; i++)
        {
            arrstring.erase(rez, 1);
            //cout << rez3 << endl;
        }


        cout << "after del symb\n" << arrstring;
        return 0;

    }
