#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, answer = 0;
    double a;
    cout << "input n= ";
    cin >> n; 
    for (int j = 0; j < n; j++) {

        cout << "Enter a" << j + 1 << "= ";
        cin >> a; 

        answer = answer + cos(a);

    }
    cout << answer; 

    return 0;
}