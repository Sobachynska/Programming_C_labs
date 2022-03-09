//Разработаем ещё одну программу на обработку одномерного массива в С++.
//Программа должна последовательно считывать десять введённых чисел с клавиатуры.
//Все введённые числа  просуммировать, результат вывести на экран.

// array_sum.cpp: определяет точку входа для консольного приложения.

#include "math.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int array1[10]; // объявляем целочисленный массив
    cout << "Enter elementi massiva: " << endl;
    int sum = 0;
    for (int counter = 0; counter < 10; counter++) // цикл для считывания чисел
        cin >> array1[counter];  // считываем вводимые с клавиатуры числа
    cout << "array1 = {";
    for (int counter = 0; counter < 10; counter++) // цикл для вывода элементов массива
        cout << 
    for (int counter = 0; counter < 10; counter++) // цикл для суммирования чисел массива
        sum += array1[counter]; // суммируем элементы массива
    cout << "}\nsum = " << sum << endl;
    
    return 0;
}