#ifndef CAINE_H
#define CAINE_H

#include "Animal.h"

class Caine : public Animal {
private:
    string nume;
    int varsta;
    float greutate;

public:
    Caine(const string& nume, int varsta, float greutate);
    ~Caine();

    string getNume() const override;
    int getVarsta() const override;
    float getGreutate() const override;
    void descriere() const override;
};

#endif // CAINE_H
