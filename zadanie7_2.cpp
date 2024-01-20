#include <iostream>
using namespace std;

int factorial(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

void checkResult(int result)
{   
    cout << "Wynik jest podzielny przez: " << endl;

    if (result % 2 == 0)
    {
        cout << 2 << endl;
    }
    if (result % 3 == 0)
    {
        cout << 3 << endl;
    }
    if (result % 5 == 0)
    {
        cout << 5 << endl;
    }
    if (result % 11 == 0)
    {
        cout << 11 << endl;
    }
}

int main()
{
    int number = 0;
    int result = 0;

    cout << "Podaj liczbę: ";
    cin >> number;
    result = factorial(number);

    cout << "Silnia " << number << " wynosi " << result << endl;

    checkResult(result);

    return 0;
}