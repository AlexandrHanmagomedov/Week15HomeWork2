//Задание 5. Пользователь вводит строку символов и искомый символ, посчитать сколько раз он встречается
//в строке.
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    ////////////////////0123456789
    string arrstring("qweeeeerty1234444444");
    cout << "Before del symb\n" << arrstring;

    cout << "\n\nenter the character you want to count \n";
    char s;
    cin >> s;

    //int rez = arrstring.find(s);

    int rez3 = count(arrstring.begin(), arrstring.end(), s);
    //cout << rez3 << endl;

    //for (int i = 0; i < rez3; i++)
    //{
    //  //  arrstring.erase(rez, 1);
    //    cout << rez3 << endl;
    //}


    cout << "symb >" << s<<"< vstrechaetsia >" <<rez3<< "< raz" ;
    return 0;

}
