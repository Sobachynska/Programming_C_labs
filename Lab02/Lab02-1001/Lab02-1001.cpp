//i від 1 до 100
//j від 1 до 50
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
   
    int i, j;
    double a=0;
    cout << "Ведіть i: ";
    cin >> i;
    cout << "Ведіть j: ";
    cin >> j;
    for (i = 1; i <= 100; i++) {
        for (j = 1; j <= 50; j++);
            a = (i + j); 
    }
    cout << "Результат: " << a;


    return 0;
}


