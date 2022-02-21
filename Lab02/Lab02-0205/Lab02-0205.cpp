#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    setlocale(LC_CTYPE, "ukr");
    float a, b, c;
    double min, v1, v2;
    cout << "Введiть 3 числа через пробiл: ";
    cin >> a >> b >> c;
    v1 = ((a + b + c) / 2);
    v2 = sqrt((1 / (pow(a, 2) + 1)) + (1 / (pow(b, 2) + 1)) + (1 / (pow(c, 2) + 1)));
    min = v1;
    if (v1 > v2)
    cout << "min = " << v1;
    else cout << "min = " << v2;
    return 0;
}