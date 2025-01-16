#include <iostream>
#include <vector>
#include "Caine.h"
#include "Pisica.h"
#include "Pasare.h"

using namespace std;

int main() {
    vector<Animal*> animale;

    // Adding at least 2 objects from each class
    animale.push_back(new Caine("Rex", 5, 30.0f));
    animale.push_back(new Caine("Max", 3, 25.0f));
    animale.push_back(new Pisica("Mimi", 2, 4.5f));
    animale.push_back(new Pisica("Luna", 1, 3.8f));
    animale.push_back(new Pasare("Coco", 1, 0.8f));
    animale.push_back(new Pasare("Tweety", 2, 0.6f));

    // Adding other objects
    animale.push_back(new Caine("Bella", 7, 28.0f));
    animale.push_back(new Pisica("Tom", 4, 5.2f));
    animale.push_back(new Pasare("Rio", 3, 1.1f));

    // Display all animals
    cout << "Lista animalelor:" << endl;
    for (const auto& animal : animale) {
        cout << *animal << endl;
    }

    // Calculate average weight
    float totalGreutate = 0;
    for (const auto& animal : animale) {
        totalGreutate += animal->getGreutate();
    }
    cout << "Greutatea medie: " << totalGreutate / animale.size() << "kg." << endl;

    // Free memory
    for (auto& animal : animale) {
        delete animal;
    }
    animale.clear();

    return 0;
}
