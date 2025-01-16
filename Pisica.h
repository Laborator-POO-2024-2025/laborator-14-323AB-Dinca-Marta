#ifndef PISICA_H
#define PISICA_H

#include "Animal.h"

class Pisica : public Animal {
private:
    string nume;
    int varsta;
    float greutate;

public:
    Pisica(const string& nume, int varsta, float greutate);
    ~Pisica();

    string getNume() const override;
    int getVarsta() const override;
    float getGreutate() const override;
    void descriere() const override;
};

#endif // PISICA_H

