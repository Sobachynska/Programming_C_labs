#include<cmath>
#include <iostream>

using namespace std;

int main()
{
    float v1, v2, s0, S, T = 0;
	cout << "v1=";
	cin >> v1;
	cout << "v2=";
	cin >> v2;
	cout << "s0=";
	cin >> s0;
	cout << "T=";
	cin >> T;
	float tmeet = (v1 + v2) / s0;
	//tmeet - час зустрічі
	S = (v1 + v2) * (T - tmeet);
	cout << "S=" << S;
	return 0;

}