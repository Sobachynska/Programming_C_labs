﻿#include <iostream>
#include <iomanip>

void main()
{
    const int N = 5;
    int matrix[N][N];

    // Заполняем матрицу случайными числами.
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            matrix[i][j] = rand() % 20 - 10;

    int sum[N], k = 0;  // sum - Массив, в котором будет хранится сума нужных строк. k -  кол-во строк с эл. на главной диагонале, которые меньше нуля. 
    for (int i = 0; i < N; i++)
        sum[i] = 0;

    for (int i = 0; i < N; i++)
    {
        if (matrix[i][i] < 0)
        {
            k++; 
            for (int j = 0; j < N; j++)
                sum[i] += matrix[i][j];  // Просуммировать все эл. строки в i-й эл. массива суммы.
        }
    }

    // Вывод матрицы и результата.
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            std::cout << std::setw(3) << matrix[i][j] << ' ';
        std::cout << std::endl;
    }

    for (int i = 0; i < k; i++)
    {
        if (matrix[i][i] < 0)
            std::cout << "Sum of row #" << i << " = " << sum[i] << std::endl;
    }

    system("pause");
}