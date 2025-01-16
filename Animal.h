#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual ~Animal() = default; // Virtual destructor

    // Pure virtual methods
    virtual string getNume() const = 0;
    virtual int getVarsta() const = 0;
    virtual float getGreutate() const = 0;
    virtual void descriere() const = 0;

    // Overload << operator
    friend ostream& operator<<(ostream& out, const Animal& animal) {
        animal.descriere();
        return out;
    }
};

#endif // ANIMAL_H

