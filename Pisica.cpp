#include "Pisica.h"

Pisica::Pisica(const string& nume, int varsta, float greutate)
    : nume(nume), varsta(varsta), greutate(greutate) {
}

Pisica::~Pisica() {
    cout << "Destructor Pisica: " << nume << endl;
}

string Pisica::getNume() const {
    return nume;
}

int Pisica::getVarsta() const {
    return varsta;
}

float Pisica::getGreutate() const {
    return greutate;
}

void Pisica::descriere() const {
    cout << "Pisica: " << nume << ", Varsta: " << varsta << ", Greutate: " << greutate << "kg." << endl;
}
