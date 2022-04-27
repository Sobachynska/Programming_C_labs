#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int p = 5, i, j;
    float x;
    int min, max;

    float arr[5] = { 1.0, 5.8, 23.4, 54.3, 57.9 };
    cout << "введiть x: ";
    cin >> x;
    for (int a = 0; a < p - 1; a++) {

        if (arr[a] > x) {
            min = a - 1;
            max = a;
            cout << min << endl;
            cout << max << endl;
            break;
        }
    }
}
