﻿#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
//підключаємо різні бібліотеки
using namespace std;
//для cin, cout, etc
int main() {
    string str; //вводимо рядок в програму
    int r=1;
    int d=1;
    int num = 0;
    cout << "Enter string: "; //просять ввести наш рядок з клавіатури
    getline(cin, str); //витягуємо дані, які ввели з клавіатури
    for (unsigned int i = 0; i <= str.length(); i++) {
        //тип unsigned int - зберігає тільки додатні цілі числа
        //str.length() - отримуємо кількість символів у даному рядку
        //далі йде цикл по нашому рядку, там де ми перебираємо символи, порівнюючи їх з цифрами, щоб саме дізнатись чи це цифра чи ні 
        if (isdigit(str[i])) {
            //перебір кодів симолів, цифри знаходять відо '0' до '9' [48-57]
            //якщо це цифра то залишає її значення без змін, якщо ж ні - занулює
            d = str[i] - 48; //перетворили число 48 в символ-позицію '48'
            if ((d >= 0) && (d < 10)) { //цифри від 0 до 9
                num = num * 10 + d; //
                cout << d << endl; 
                //виписує всі цифри з нового рядка
            }
        }
        else {
            if (num > 0)
            {
                r = r * num;
            }
            //перемножуємо числа, інкаше будуть просто виводитись підряд
            num = 0; 
        }
    }


    cout << "Dobutok = " << r << endl; //виводимо наш добуток
   
}