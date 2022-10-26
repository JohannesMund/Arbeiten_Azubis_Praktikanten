#include <iostream>

using namespace std;

int addierer(int i, int j)
{
    cout << i << " " << j << endl;
    return i + j;
}

int main()
{
    struct TPerson
    {
        string name;
        string nachname;
        int alter;

        bool istAltGenug()
        {
            if (alter >= 18)
            {
                return true;
            }

            return false;
        };
    };

    TPerson luca;
    luca.name = "Luca";
    luca.nachname = "Kustes";
    luca.alter = 17;

    TPerson carlos = {"Carlos", "Foitin", 24};

    TPerson leute[5];

    leute[0] = luca;
    leute[1] = carlos;
    leute[2] = {"Benjamin", "Ohler", 29};

    leute[3].name = "David";
    leute[3].nachname = "Pitz";
    leute[3].alter = 26;

    leute[4] = {"Johannes", "Mund", 44};

    int i = 0;
    while (i < sizeof(leute))
    {
        if (leute[i].istAltGenug())
        {
            cout << "Prost" << leute[i].name << endl;
        }
        i++;
    }

    return 0;
}
