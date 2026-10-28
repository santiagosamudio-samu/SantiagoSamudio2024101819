#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

const string ARCHIVO = "personajes.txt";

struct Personaje {
    string nombre;
    int vida;
    int ataque;
};

int leerEntero(const string& mensaje) {
    int valor;
    cout << mensaje;
    while (!(cin >> valor) || valor < 0) {
        cout << "Valor invalido. " << mensaje;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return valor;
}

Personaje pedirPersonaje() {
    Personaje p;
    do {
        cout << "Nombre: ";
        getline(cin, p.nombre);
    } while (p.nombre.empty());
    p.vida = leerEntero("Vida: ");
    p.ataque = leerEntero("Ataque: ");
    return p;
}

void registrarPersonaje() {
    Personaje p = pedirPersonaje();

    ofstream archivo(ARCHIVO, ios::app);
    if (!archivo.is_open()) {
        cout << "Error: No se pudo abrir el archivo." << endl;
        return;
    }
    archivo << p.nombre << " " << p.vida << " " << p.ataque << endl;
    archivo.close();
    cout << "Datos guardados correctamente en " << ARCHIVO << endl;
}

void mostrarPersonajes() {
    ifstream archivo(ARCHIVO);
    if (!archivo.is_open()) {
        cout << "Error: El archivo no existe o no se pudo abrir." << endl;
        return;
    }

    string linea;
    int n = 0;
    cout << "=== Lista de Personajes Guardados ===" << endl;
    while (getline(archivo, linea)) {
        if (linea.empty()) continue;
        size_t p2 = linea.rfind(' ');
        size_t p1 = (p2 == string::npos) ? string::npos : linea.rfind(' ', p2 - 1);
        if (p1 == string::npos) {
            cout << "- " << linea << endl;
            continue;
        }
        cout << ++n << ". Nombre: " << linea.substr(0, p1)
             << " | Vida: " << linea.substr(p1 + 1, p2 - p1 - 1)
             << " | Ataque: " << linea.substr(p2 + 1) << endl;
    }
    if (n == 0) cout << "(No hay personajes guardados)" << endl;
    archivo.close();
}

int main() {
    int opcion;
    do {
        cout << "\n===== MENU =====" << endl;
        cout << "[1] Registrar nuevo personaje" << endl;
        cout << "[2] Ver todos los personajes guardados" << endl;
        cout << "[3] Salir" << endl;
        opcion = leerEntero("Opcion: ");

        switch (opcion) {
            case 1: registrarPersonaje(); break;
            case 2: mostrarPersonajes(); break;
            case 3: cout << "Hasta luego." << endl; break;
            default: cout << "Opcion no valida." << endl;
        }
    } while (opcion != 3);

    return 0;
}