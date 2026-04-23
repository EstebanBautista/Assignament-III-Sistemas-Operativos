#include <iostream>

using namespace std;

int main(){
	//1. Declarar variables
	int var = 32;
	int *ptr = &var;
	int &ref = var;
	
	cout << "Valor inicial: " << var << endl;
	cout << "Direccion de la variable: " << ptr << endl;
	cout << "Direccion de la referencia: " << &ref << endl;
	cout << "Valor de la referencia: " << ref << endl;

	// 2. Modificar valor usando el puntero
	*ptr = 75;
	cout << "\nValor modificado a traves del puntero: " << var << endl;

	// 3. Modificar valor usando la referencia
	ref = 100;
	cout << "Valor modificado a traves de la referencia: " << var << endl;

	// 4. Mostrar direcciones de memoria finales
	cout << "\nDireccion del puntero (variable ptr): " << &ptr << endl;
	cout << "Direccion almacenada en el puntero (hacia var): " << ptr << endl;
	cout << "Direccion de la referencia (igual a la variable): " << &ref << endl;
	
	return 0;
}
