//Задание 3. Написать функцию, которая вставляет в строку
//в указанную позицию заданный символ.

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void insert(string &arrstring, char s, int v) {

    arrstring += '*';
    for (int i = arrstring.length(); i > v; i--) {
        arrstring[i] = arrstring[i - 1];
    }
    arrstring[v] = s;
}

int main()
{
   
    //////////////////0123456789
    string arrstring("qweeee.rty12344.");
    cout << "Before insert symb\n" << arrstring;

    cout << "\n\nenter the character you want to insert \n";
    char s;
    cin >> s;

    cout << "\n\nenter the position where you want to insert ot (0 do "<<arrstring.length()<<")\n";
    int v;
    cin >> v;

    insert(arrstring, s, v);
    cout << "after insert symb\n" << arrstring;

    /*int countsymb = 0;
    while (arrstring[countsymb]!='\0')    {
        countsymb++;
    }
    cout << countsymb;*/
  
    //int rez = arrstring.find(s);

    //int rez3 = count(arrstring.begin(), arrstring.end(), s);

    //for (int i = 0; i < rez3; i++)
    //{
    //    arrstring.erase(rez, 1);
    //    //cout << rez3 << endl;
    //}
}