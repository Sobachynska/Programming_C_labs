﻿#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    float a;
    int f;
    cout << "Введіть число: ";
    cin >> a;
    if (a < -1)
        f = 0 * a;
    else
        if (a < 1)
            f = sqrt(1 - pow(a, 2));
        else f = a - 1;
    cout << "f(a) = " << f;
    return 0;
}