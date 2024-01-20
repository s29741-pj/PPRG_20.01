#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    double r = 0;
    double pi = 3.14;
    double circleField = 0;
    vector<vector<double>> table;
    vector<double> fieldCell;

    cout << "Proszę podać promień koła: ";
    cin >> r;

    circleField = pi * pow(r, 2);

    cout << circleField;

    fieldCell.push_back(circleField);

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            table.push_back(fieldCell);
        }
    }

    for (int i = 0; i < table.size(); i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout << table[i][j];
        }
        cout << endl;
    }

    return 0;
}