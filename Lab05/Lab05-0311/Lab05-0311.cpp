    string sn, s: ;
	integer l, k, kod;
	real v, p;
	cout << "Введіть рядок ";
	getline(cin, s);
    l = length(s);
    p = 1; 
	k = 1;
	repeat sn : = '';
	while (s[k] > = '0') and (s[k] <= '9') and (k <= l) do begin sn : = sn + s[k];
    k: = k + 1; end;
	if sn < > '' then begin val(sn, v, kod);
    p: = p * v; end;
    k: = k + 1;
	until k > l;
	writeln('p =', p); end.
    return 0;
}
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	string sn, s;
	int l, k, kod;
	double v, p;
	cout << "Введіть рядок ";
	getline(cin, s);
	l = length(s) const;
	p = 1;
	k = 1;
		return 0;
}