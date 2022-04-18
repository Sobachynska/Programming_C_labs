#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    char a, b;
    cout << "vvedit a: ";
    cin >> a;
    cout << "vvedit b: ";
    cin >> b;
    char* aPtr = &a, * bPtr = &b;

    *aPtr = a + 1;
    cout << "zminene znachenia a: " << *aPtr << endl;

    cout << "a= " << *bPtr;
    cout << " b= " << *aPtr;

    return 0;
}