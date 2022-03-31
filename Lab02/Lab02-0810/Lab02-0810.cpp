#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int n, count = 0;
    double x, a, cos_a, sum = 0;
    std::cout << "x=";
    std::cin >> x;
    std::cout << "n=";
    std::cin >> n;

    for (int k = 1; k <= n; k++)
    {
        std::cout << "a" << k << "=";
        std::cin >> a;
        cos_a = cos(sum + a);
        std::cout << cos_a << "\n";
        if (x == cos_a) { count++; }
    }
    std::cout << count << "\n";

}