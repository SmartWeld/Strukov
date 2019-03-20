#include <iostream>

using namespace std;

int main()
{
    int w,res;
    cin >> w;

    if (w >= 1 && w <= 100)
    {
     res = w % 2;
    }
    else
    {
     cout << "SORRY,NOPE" << endl;
     return 0;
    }

    if (res == 0 && w > 2)
    {
     cout << "YES" << endl;
    }
    else
    {
     cout << "NO" << endl;
    }
    return 0;
}

/*
 *
 * Какой вариант предпочтительнее:
 * 1. указание двух условий сразу (как выше) или разбиение на несколько if?
 * 2. выполнять подсчеты в поле условия или заранее с использование другой переменной?
 *
 */
