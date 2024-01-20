#include <iostream>
#include <vector>
using namespace std;

struct personData
{
    vector<vector<string>> personList;
    vector<string> person;
    string name;
    string surname;

    void updatePersonList()
    {
        personList.push_back(person);
        person.clear();
    }

    void updatePerson()
    {
        for(int i = 0; i < 3; i++) {
            cout << "Podaj imię osoby nr " << i+1 << ": ";
            cin >> name;
            cout << "Podaj nazwisko osoby nr " << i+1 << ": ";
            cin >> surname;
            cout << endl;

            person.push_back(name);
            person.push_back(surname);
            updatePersonList(); 
        }

    }

    void printPersonList()
    {
        cout << "Imiona i nazwiska trzech osób: " << endl;

        for (int i = 0; i < personList.size(); i++)
        {
            for (int j = 0; j < 1; j++)
            {
                cout << "Osoba nr " << i + 1 << ": " << personList[i][j] << " " <<  personList[i][j+1] <<  endl;
            }
        }
    }
};

int main()
{
    struct personData personTab;
    personTab.updatePerson();
    personTab.printPersonList();

    return 0;
}
