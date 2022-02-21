#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    float a, f(a);
    cin >> a;
    if (a < 1)
        f(a) = 0 * a;
    else
        if (a < 1)
            f(a) = sqrt(1 - pow(a, 2));
        else f(a) = a - 1;

    cout << "f(a)" << f(a);

    return 0;
}