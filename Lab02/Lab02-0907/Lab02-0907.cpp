#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x0 = 0, x1 = 1, x, n, tmp1, tmp2;
    tmp1 = x0;
    tmp2 = x1;

    std::cin >> n;

    for (int i = 3; i <= n; i++)
    {
        x = tmp2 * (tmp1 + 1);
        tmp1 = tmp2;
        tmp2 = x;
    }

    std::cout << x << "\n";
}

