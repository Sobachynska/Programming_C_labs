#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int p = 5, i, j;
    float x;
    int min, max;

    float arr[5] = { 2.0, 4.5, 27.5, 53.1, 87.4 };
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
