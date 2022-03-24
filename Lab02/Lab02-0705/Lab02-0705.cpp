#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i, answer = 0;
    int a;
    cout << "input i= ";
    cin >> i;
    for (int j = 0; j < i; j++) {

        cout << "Enter a" << j + 1 << "= ";
        cin >> a; 

        answer = answer + abs(a);

    }
    cout << answer; 


    return 0;
}