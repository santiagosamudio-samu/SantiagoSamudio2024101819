#include <iostream>
using namespace std;

int main() {
    char c = ' ';

    for (c = ' '; c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'; ) {
        cout << "Ingrese un caracter: ";
        cin >> c;
    }

    cout << "Ingreso la vocal minuscula: " << c << endl;

    return 0;
}
