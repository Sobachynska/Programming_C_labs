#include <iostream>
using namespace std;
int main()
{
	int r = 6, h = 7;
	int V;
	int  P = 3; //приблизне значення числа Пі
	int* rPtr = &r, * hPtr = &h, * VPtr = &V;
	*VPtr = P * (*rPtr) * (*rPtr);
	cout << "V=" << *VPtr;

}