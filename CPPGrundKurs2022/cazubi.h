#pragma once

#include "cperson.h"

class CAzubi : public CPerson
{
public:
    CAzubi(const std::string name, const std::string nachname, const int alter);
    void Ausgabe() override;

    void NenneDeinenNamen() override;
};
