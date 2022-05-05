#include <iostream>
using namespace std;

int main()
{
    const int N = 5;
    int matrix[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            matrix[i][j] = rand() % 20 - 10;

    int max[N], matrix[j], k = 0;
    for (int i = 0; i < N; i++)
        max[i] = 0;

    for (int i = 0; i < N; i++)
    {
        if (matrix[i][i] < 0)
        {
            k++;
            for (int j = 0; j < N; j++)
                for (int r = 1; r < N; r++)
                {
                    if (max < matrix[j]) max = matrix[j];
                }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << matrix[i][j] << ' ';
        cout << endl;
    }

    for (int i = 0; i < k; i++)
    {
        if (matrix[i][i] < 0)
            cout << "max element: " << i << " = " << max[i] << endl;
    }

    system("pause");
}