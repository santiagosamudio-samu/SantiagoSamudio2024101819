#include <iostream>
#include <iostream>
using namespace std;

void diasemana(int dia) {
    switch (dia) {
    case 1:
        cout << "\nLunes" << endl;
            break;
    case 2:
        cout << "\nMartes" << endl;
            break;
    case 3:
        cout << "\nMiercoles" << endl;
            break;
    case 4:
        cout << "\nJueves" << endl;
            break;
    case 5:
        cout << "\nViernes" << endl;
        break;
    case 6:
            cout << "\nSabado" << endl;
        break;
    case 7:
            cout << "\nDomingo" << endl;
        break;
        default:
            cout << "\nError al cargar el numero solicitado" << endl;
            break;
    }
}

int main() {
    int num;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> num;
    
    diasemana(num); 
    
    return 0;
}
