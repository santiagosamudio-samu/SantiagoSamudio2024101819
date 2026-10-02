#include <cstdlib>
#include <iostream>
using namespace std;
int main (){
	const int centinela = -1;
	float nota, contador = 0, suma = 0;
	cout << "\n<<< Bienvenido >>>" ;
	cout << "\nIntroduzca la siguiente nota :\n-1 centinela: " ;
	cin >> nota;
	while (nota != centinela){
		contador++;
		suma += nota;
		cout << "\nIntrodusca la siguente nota :\n-1 -1centinela : ";
		cin >> nota;
		if (contador >0)
		cout << "\nmedia = " << suma / contador << endl;
		else
		cout << "\ni¿o hay notas";
		
	}
	return 0;
}
