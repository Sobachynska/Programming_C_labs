//10. Дано три дійсних числа X, Y, Z.Перерозподілити значення так, щоб в X виявилося найменше
//з цих значень, а у Z – найбільше.

#include <iostream>
#include <cmath>

    using namespace std;
    int main()
    {
        setlocale(LC_CTYPE, "ukr");
        int X, Y, Z;
        cout << "Введiть X: ";
        cin >> X;
        cout << "Введiть Y: ";
        cin >> Y;
        cout << "Введiть Z: ";
        cin >> Z;
        if (X > Y)
        {
            swap(X, Y); // міняє місцями
        }
        if (Z < Y)
        {
            swap(Y, Z);
        }
        if (X > Z)
        {
            swap(X, Z);
        }
        if (X > Y)
        {
            swap(X, Y);
        }
        cout << "X=" << X << endl;
        cout << "Y=" << Y << endl;
        cout << "Z=" << Z;
        return 0;
    }
