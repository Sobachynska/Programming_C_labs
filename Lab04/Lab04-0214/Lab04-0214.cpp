#include <iostream>
using namespace std;

int main()
{
    const int n = 10;
    int A[n] = {};
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != A[i - 1])
        {
            count = count + 1;
        }
    }
    cout << "kilkist riznyh" << count;
}