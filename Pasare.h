#ifndef PASARE_H
#define PASARE_H

#include "Animal.h"

class Pasare : public Animal {
private:
    string nume;
    int varsta;
    float greutate;

public:
    Pasare(const string& nume, int varsta, float greutate);
    ~Pasare();

    string getNume() const override;
    int getVarsta() const override;
    float getGreutate() const override;
    void descriere() const override;
};

#endif // PASARE_H
