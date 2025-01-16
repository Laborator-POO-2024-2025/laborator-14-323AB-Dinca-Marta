#include "Caine.h"

Caine::Caine(const string& nume, int varsta, float greutate)
    : nume(nume), varsta(varsta), greutate(greutate) {
}

Caine::~Caine() {
    cout << "Destructor Caine: " << nume << endl;
}

string Caine::getNume() const {
    return nume;
}

int Caine::getVarsta() const {
    return varsta;
}

float Caine::getGreutate() const {
    return greutate;
}

void Caine::descriere() const {
    cout << "Caine: " << nume << ", Varsta: " << varsta << ", Greutate: " << greutate << "kg." << endl;
}
