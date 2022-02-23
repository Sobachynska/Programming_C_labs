//так як n строго між 1 і 4, тому воно дорівнює 2 або 3
#include <iostream>
#include <math.h>

    using namespace std;

    int main()
    {
        setlocale(LC_CTYPE, "ukr");

        int n;
        cout << "Введiть цiле число ";
        cin >> n;
        switch (n) {
        case 2:
            cout << "квiтень, травень, червень";
            break;
        case 3:
            cout << "липень, серпень, вересень";
            break;
        }
        return 0;
    }
    

