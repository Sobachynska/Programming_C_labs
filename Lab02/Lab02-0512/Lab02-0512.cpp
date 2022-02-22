//12. Дано ціле число n(1< n < 4), яке визначає порядковий номер кварталу року(січень, лютий,
//березень — І квартал і т.д.).За вказаним значенням n надрукувати перелік місяців, які належать до цього кварталу.

#include <iostream>
#include <math.h>

    using namespace std;

    int main()
    {
        setlocale(LC_CTYPE, "ukr");

        int n;
        cout << "Введіть ціле число ";
        cin >> n;
        switch (n) {
        
        case 2:
            cout << "квітеь, травень, червень";
            break;
        case 3:
            cout << "липень, серпень, вересень";
            break;

        
        }


        return 0;
    }
    

