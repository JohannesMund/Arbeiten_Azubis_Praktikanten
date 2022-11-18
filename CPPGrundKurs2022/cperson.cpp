#include "cperson.h"
#include <iostream>

using namespace std;

CPerson::CPerson(const std::string name, const std::string nachname, const int alter)
{
    _name = name;
    _nachname = nachname;
    _alter = alter;
    _superPower = EFaehigkeiten::eNichts;
    cout << "Es macht plopp und " << _name << " erscheint aus dem Nichts" << endl;
}

CPerson::~CPerson()
{
}

void CPerson::Ausgabe()
{
    cout << _name << " " << _nachname << " " << _alter << endl;
    cout << "Die Superpower ist: " << superPowerAsText() << endl;
}

void CPerson::setAlter(const int i)
{
    _alter = i;
}

int CPerson::getAlter() const
{
    return _alter;
}

CPerson::EFaehigkeiten CPerson::getSuperPower() const
{
    return _superPower;
}

void CPerson::setSuperPower(const EFaehigkeiten sp)
{
    _superPower = sp;
}

string CPerson::superPowerAsText(EFaehigkeiten e)
{
    switch (e)
    {
    case EFaehigkeiten::eGesangsTalent:
        return "kann gut singen";
    case EFaehigkeiten::eHilfsBereitschaft:
        return "hilft immer allen";
    case EFaehigkeiten::eRaidSucht:
        return "zockt dauernd Pokemon-Raids";
    case EFaehigkeiten::eSparsamGucken:
        return "guckt sparsam";
    case EFaehigkeiten::eNichts:
    default:
        return "kann nix";
    }
}

string CPerson::superPowerAsText() const
{
    return superPowerAsText(_superPower);
}
