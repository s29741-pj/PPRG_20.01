#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    double r = 0;
    double pi = 3.14;
    double circleField = 0;
    int increment = 0;
    vector<vector<double>> table;
    vector<double> fieldCell;

    cout << "Proszę podać promień koła: ";
    cin >> r;

    circleField = pi * pow(r, 2);

    // cout << circleField;

    fieldCell.push_back(circleField);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            table.push_back(fieldCell);
        }
    }

    for (int i = 0; i < table.size(); i++)
    {
        for (int k = 0; k < 10; k++)
        {
            for (int j = 0; j < 1; j++)
            {
                cout << setw(7) << table[i][j] + increment << " ";
                increment +=3;
            }
        }

        cout << endl;
    }

    return 0;
}