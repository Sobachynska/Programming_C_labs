#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;

    int* aPrt = new int;
    cout << "znachenya a ";
    cin >> *aPrt;
    int* bPrt = new int;
    cout << "znachenya b ";
    cin >> *bPrt;
    int* cPrt = new int;
    cout << "znachenya c ";
    cin >> *cPrt;

    d = *aPrt / 2;
    cout << d;
}