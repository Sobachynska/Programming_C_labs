
#include <string>
#include <cstdlib>
#include <stdafx.h>
#include <stdio.h>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	string s, sn;
	int k, kod;
	double v, p;
	cout << "Введiть рядок: ";
	getline(cin, s);
	l = length(s);
	p = 1;
	k = 1;
	do {
	sn = '';
	while (s[k] >= '0') and (s[k] <= '9') and (k <= l)
	{
		sn = sn + s[k];
		k = k + 1;
	}
	if sn < >'';
	{
		val(sn, v, kod);
		p = p * v;
	}
	k = k + 1;
   
	while (k > l)
	
		cout << "p= " << p;
	

	return 0;
}
 
 
 
// 
// 
//#include <iostream>
//#include "stdafx.h"
//#include <string>
//
//using namespace std;
//
//int main(void)
//{
//    string str, s;
//    cout << "Введите строку" << endl;
//    getline(cin, str);
//
//    int l = str.length(), k = 1, kod;
//    double p = 1., v;
//    do {
//        s = "";
//        while ((s[k] >= '0') && (s[k] <= '9') && (k <= l))
//        {
//            s = s + s[k];
//            k = k + 1;
//        }
//        if (s != "")
//        {
//            val(s, v, kod); // а это процедура
//            p = p * v;
//        }
//        k = k + 1;
//    } while (k > 1);
//    cout << " p=" << p << endl;
//
//    return 0;
//}
//



//
//#include "stdafx.h"
//#include <stdio.h>
//
//char sn, s;
//int l, k, kod;
//float v, p;
//
//printf("string: \n");
//l = length(s);
//p = 1; k = 1;
//for sn = '';
//while (s[k] >= '0') && (s[k] <= '9') && (k <= l) do
//{
//    sn = sn + s[k];
//    k = k + 1;
//}
//if sn < >'';
//{
//    val(sn, v, kod);
//    p = p * v;
//}
//k = k + 1;
//until k > l;
//printf(" p= : \n");
//}