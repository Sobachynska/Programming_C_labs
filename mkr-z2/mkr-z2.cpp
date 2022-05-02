//#include <iostream>
//#include <iomanip>
//using namespace std;
// 
//int main()
//{    setlocale(LC_CTYPE, "ukr");
//    const int n = 4, m = 5;
//    int mat[n][m] = {{-3, 0, 9, 12, 13},
//                     {7, 22, 0, 9, 14},
//                     {11, -12, 13, 14, 15},
//                     {16, 17, 4, 19, 10}};
// 
//    cout << " початкова матриця:" << '\n';
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        { cout << setw(4) << mat[i][j]; }
//        cout << '\n';
//    }
//    int temp;
//    for (int i = 0; i < n; i++)
//    {
//        temp = mat[i][0];
//        mat[i][0] = mat[i][n];
//        mat[i][n] = temp;
//    }
//    cout << '\n';
// 
//    cout << " кiнцева матриця:" << '\n';
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        { cout << setw(4) << mat[i][j]; }
//        cout << '\n';
//    }
//    return 0;
//}
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    const int n = 4, m = 5;
    int mat[n][m] = { {-3, 0, 9, 12, 13},
                     {7, 22, 0, 9, 14},
                     {11, -12, 13, 14, 15},
                     {16, 17, 4, 19, 10} };

    cout << " початкова матриця:" << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(4) << mat[i][j];
        }
        cout << '\n';
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        temp = mat[i][0];
        mat[i][0] = mat[i][n];
        mat[i][n] = temp;
    }
    cout << '\n';

    cout << " кiнцева матриця:" << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(4) << mat[i][j];
        }
        cout << '\n';
    }
    return 0;
}
