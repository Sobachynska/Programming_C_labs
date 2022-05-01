//i від 1 до 100
//j від 1 до 50
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    long long int i, j, Summ = 0, Total = 0;

    for (i = 1; i <= 100; i++)
    {
        for (j = 1; j <= 50; j++)
        {
            Summ = Summ + (i + j);
        }
        Total = Total + Summ;
        Summ = 0;
    }
    std::cout << Total << "\n";
}


