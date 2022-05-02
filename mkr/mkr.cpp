#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");

    int S = 100, N;
    do {
        cout << "Введiть ваш бал(вiд 0 до 100):";
        cin >> N;
    } while (N > 100 || N <= 0);

    if (N >= S / 100 * 92) {
        cout << "Ваш бал 12";
    }
    else if (N < S / 100 * 92 && N >= S / 100 * 70) {
        cout << "Ваш бал 8";
    }
    else if (N < S / 100 * 70 && N >= S / 100 * 50) {
        cout << "Ваш бал 5";
    }
    else cout << "Ваш бал 2";
}