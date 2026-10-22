
#include <iostream>
#include <string>
using namespace std;

struct Personaje {
    string nombre;
    int fuerza;
};

int main() {
    Personaje p1 = {"Guerrero", 85};
    Personaje p2 = {"Mago", 70};

    cout << "=== Batalla de Gallo ===" << endl;

    cout << p1.nombre << ": " << p1.fuerza << " puntos de ataque" << endl;
    cout << p2.nombre << ": " << p2.fuerza << " puntos de ataque" << endl;

    if (p1.fuerza > p2.fuerza) {
        cout << "Gana " << p1.nombre << "!" << endl;
    } 
    else if (p2.fuerza > p1.fuerza) {
        cout << "Gana " << p2.nombre << "!" << endl;
    } 
    else {
        cout << "Es un empate!" << endl;
    }

    return 0;
}

