#pragma once

#include <string>

class CPerson
{
public:
    enum EFaehigkeiten
    {
        eNichts,
        eGesangsTalent,
        eHilfsBereitschaft,
        eRaidSucht
    };

    CPerson(const std::string name, const std::string nachname, const int alter);
    ~CPerson();

    virtual void NenneDeinenNamen() = 0;

    virtual void Ausgabe();

    void setAlter(const int i);
    int getAlter() const;

    EFaehigkeiten getSuperPower() const;
    void setSuperPower(const EFaehigkeiten sp);

    static std::string superPowerAsText(EFaehigkeiten e);

protected:
    std::string _name;
    std::string _nachname;
    int _alter;

private:
    EFaehigkeiten _superPower;

    std::string superPowerAsText() const;
};
