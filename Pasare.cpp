#include "Pasare.h"

Pasare::Pasare(const string& nume, int varsta, float greutate)
    : nume(nume), varsta(varsta), greutate(greutate) {
}

Pasare::~Pasare() {
    cout << "Destructor Pasare: " << nume << endl;
}

string Pasare::getNume() const {
    return nume;
}

int Pasare::getVarsta() const {
    return varsta;
}

float Pasare::getGreutate() const {
    return greutate;
}

void Pasare::descriere() const {
    cout << "Pasare: " << nume << ", Varsta: " << varsta << ", Greutate: " << greutate << "kg." << endl;
}
