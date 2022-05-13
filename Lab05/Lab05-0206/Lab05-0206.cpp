#include <iostream>
#include <string>
#include <sstream>
#include <cstdarg>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    cout << "Введiть речення: ";
    std::string s;
    getline(cin, s); //зчитує наш текст з пробілами до enter
    
    std::stringstream ss(s); //розрив слів

    //w попереднє слово, парне
    //aW еаступне слово, непарне

    std::string w;
    std::string aW;

    bool odd = true;
    // bool true копіююча ініціалізація, даємо додатнє значення, правильність
    //odd непарні

    while (ss >> w)
    {
        if (odd) 
            aW = w;
        else 
            std::cout<< w << " " << aW << " ";
        odd = !odd;
        //odd непарні
        //!odd парні
    }
    if (!odd) 
    {
        cout << w << endl;
    }
   

    system("pause");
    
    return 0;
}