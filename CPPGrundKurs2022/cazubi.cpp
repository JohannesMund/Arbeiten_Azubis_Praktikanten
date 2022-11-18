#include "cazubi.h"

#include <iostream>

CAzubi::CAzubi(const std::string name, const std::string nachname, const int alter) : CPerson(name, nachname, alter)
{
    std::cout << "Und daruber hinaus ist " << name << " ein(e) Auszubildende(r). " << std::endl;
}

void CAzubi::Ausgabe()
{

    CPerson::Ausgabe();
    std::cout << "Achtung, Azubi - Hier gilt der Datenschutz." << std::endl;
}

void CAzubi::NenneDeinenNamen()
{
    std::cout << _name << " sagt: " << _name << " " << _nachname << std::endl;
}
