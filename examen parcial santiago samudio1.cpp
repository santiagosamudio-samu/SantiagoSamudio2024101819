#include<cstdlib>
#include <iostream>
using namespace std;

int sumar(int num1, int num2) { return num1 + num2; }
int restar(int num1, int num2) { return num1 - num2; }
int multiplicar(int num1, int num2) { return num1 * num2; }
float dividir(int num1, int num2) { return (float) num1 / num2; }

int main() {
    int opcion, num1, num2;
    cout << "\nIngrese la operacion \n1. Sumar, \n2. Restar, \n3. Multiplicar, \n4. Dividir: ";
    cin >> opcion;
    
    cout << "\nIngrese el primer numero (mayores a 0 y menores a 100): ";
    cin >> num1;
    cout << "\nIngrese el segundo numero (mayores a 0 y menores a 100): ";
    cin >> num2;
    
   
    if (num1 <= 0 || num1 >= 100 || num2 <= 0 || num2 >= 100) {
        cout << "\nError: Los numeros deben ser mayores a 0 y menores a 100." << endl;
        return 0; 
    }
    switch (opcion) {
        case 1: cout << "La suma es: " << sumar(num1, num2) << endl; break;
        case 2: cout << "La resta es: " << restar(num1, num2) << endl; break;
        case 3: cout << "La multiplicacion es: " << multiplicar(num1, num2) << endl; break;
        case 4: cout << "La division es: " << dividir(num1, num2) << endl; break;
        default: cout << "Opcion no valida." << endl; break;
    }
    return 0;
}



































