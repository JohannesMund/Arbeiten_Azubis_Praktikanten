#include "cazubi.h"
#include "cperson.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    CAzubi luca("Luca", "Kustes", 17);
    CAzubi carlos("Carlos", "Foltin", 24);
    CAzubi david("David", "Pitz", 26);
    CAzubi benjamin("Benjamin", "Ohler", 29);
    CAzubi daniel("Daniel", "Moll", 19);

    luca.setSuperPower(CPerson::eGesangsTalent);
    carlos.setSuperPower(CPerson::eHilfsBereitschaft);
    david.setSuperPower(CPerson::eHilfsBereitschaft);
    benjamin.setSuperPower(CPerson::eRaidSucht);

    auto sp = luca.getSuperPower();
    std::cout << CPerson::superPowerAsText(sp) << std::endl;

    luca.Ausgabe();
    carlos.Ausgabe();
    david.Ausgabe();
    benjamin.Ausgabe();
    daniel.Ausgabe();

    return 0;
}
