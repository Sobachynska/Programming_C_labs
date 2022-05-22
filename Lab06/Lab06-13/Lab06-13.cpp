#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct NOTE
{
    char name[10];
    char lastname[10];
    string phone;
    char Birthday[10];
};
void Input(int n, NOTE* note)
{
    setlocale(LC_CTYPE, "ukr");
    for (int i = 0; i < n; i++)
    {
        cout << "Введiть iм'я: "; cin >> note[i].name;
        cout << "Введiть прiзвище: "; cin >> note[i].lastname;
        cout << "Введiть номер телефону: "; cin >> note[i].phone;
        cout << "Введiть дату народження: "; cin >> note[i].Birthday;
        cout << endl;
    }
    cout << endl;
}
void Output(int n, NOTE* note)
{
    setlocale(LC_CTYPE, "ukr");
    for (int i = 0; i < n; i++)
    {
        cout << "iм'я: " << note[i].name << " ";
        cout << "прiзвище: " << note[i].lastname << " ";
        cout << "номер телефону: " << note[i].phone << " ";
        cout << "день народження: " << note[i].Birthday << " ";
        cout << endl;
    }
    cout << endl;
}
void Fam(int n, NOTE* note, string fam)
{
    setlocale(LC_CTYPE, "ukr");
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (fam == note[i].lastname)
        {
            cout << "iм'я: " << note[i].name << " ";
            cout << "прiзвище: " << note[i].lastname << " ";
            cout << "номер телефону: " << note[i].phone << " ";
            cout << "день народження: " << note[i].Birthday << " ";
            cout << endl;
        }
        else count++;
        if (count == n) cout << "Таких немає" << endl;
    }
}

//сорт для перший трьох цифр номеру телефона
void Sort(int n, NOTE* note)
{
    setlocale(LC_CTYPE, "ukr");
    NOTE buf;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (note[j].phone[0] > note[j + 1].phone[0])
            {
                buf = note[j];
                note[j] = note[j + 1];
                note[j + 1] = buf;
            }
            else if (note[j].phone[0] == note[j + 1].phone[0] && note[j].phone[1] > note[j + 1].phone[1])
            {
                buf = note[j];
                note[j] = note[j + 1];
                note[j + 1] = buf;
            }
            else if (note[j].phone[0] == note[j + 1].phone[0] && note[j].phone[1] == note[j + 1].phone[1] && note[j].phone[2] > note[j + 1].phone[2])
            {
                buf = note[j];
                note[j] = note[j + 1];
                note[j + 1] = buf;
            }
        }
    
    }
    cout << "Вiдсортована структура: " << endl;
    Output(n, note);
}
int main()
{
    setlocale(LC_CTYPE, "ukr");
    int n;
    cout << "Введiть розмiр бази: "; cin >> n;
    NOTE* note = new NOTE[n];
    Input(n, note);
    Output(n, note);
    string fam;
    cout << "Введiть прiзвище, яке треба перевiрити: "; cin >> fam;
    Fam(n, note, fam);
    Sort(n, note);
    _getch();
    return 0;
}