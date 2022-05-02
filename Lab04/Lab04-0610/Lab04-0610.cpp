#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int NxM[10][10], i, j, m, n, sum;
    cout << "Введіть кількість рядків і стовпців:" << endl;
    cout << "Кількість рядків = ";
    cin >> n;
    cout << "Кількість стовпців = ";
    cin >> m;
    srand((unsigned)time(NULL));
    for (j = 0; j < m; j++) {
        for (i = 0; i < n; i++) {
            NxM[j][i] = 2 * rand() / RAND_MAX;
        }
    }
    cout << "Матриця : " << endl;
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
            cout << setw(5) << NxM[i][j];
        cout << endl;

    }
    for (int j = 0; j < m; j++) 
    {
        sum = 0;
        for (int i = 0; i < n; i++) 
        {
            sum += NxM[j][i]; 
        }

        if (sum > 1)
            cout << "";
       

    }

    cout << NxM[i][j] << sum;
}
    //незнаю як рішати