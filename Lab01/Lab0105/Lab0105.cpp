#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int pows, abss, res = 0;
    cout << "Enter two  integer numbers:";
    cin >> a;
    cin >> b;
    pows = (pow(a, 2) + pow(b, 2)) / 2;
    abss = (abs(a) + abs(b)) / 2;
    res = pows + abss;
    cout << res;
    return 0;
}