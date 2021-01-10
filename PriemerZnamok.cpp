// Pozri sa s coho prepadas
//

#include <iostream>
using namespace std;

int main()
{
    int znamky[100];
    int sucetZnamok = 0;
    int pocetZnamok = 0;

    do {
        cout << "Zadaj znamku: \n";
        cin >> znamky[pocetZnamok];
        sucetZnamok += znamky[pocetZnamok];
        pocetZnamok++;
        double priemer = (double) sucetZnamok / (double) pocetZnamok;

        cout << "Znamky su: ";
        for (int i = 0; i < pocetZnamok; i++)
        {
            cout << znamky[i] << ", ";
        }
        cout << "\n";
        cout << "celkovy pocet znamok: " << pocetZnamok << "\n";
        cout << "sucet znamok: " << sucetZnamok << "\n";
        cout << "Priemer: " << priemer << "\n\n";
    } while (true);
}
