#include <iostream>
using namespace std;

int main(){
	// 1. Declarar un array de enteros
   	int numeros[5] = {10, 23, 31, 24, 8};

	// 2. Crear un puntero al primer elemento del array
	int* ptr = numeros;

	cout << "=== Valores iniciales del array ===" << endl;
	for(int i = 0; i < 5; i++){
		cout << "numeros[" << i << "] = " << *(ptr + i)
				<< " | Direccion: " << (ptr + i) << endl;
	}

	for(int i = 0; i < 5; i++){
		*(ptr + i) += 5; 
	}

	cout << "\n=== Valores modificados del array ===" << endl;
	for(int i = 0; i < 5; i++){
		cout << "numeros[" << i << "] = " << *(ptr + i)
				<< " | Direccion: " << ptr + i << endl;
	}

	// 3. Mostrar direcciones generales
	cout << "\nDireccion base del array: " << numeros << endl;
	cout << "Direccion almacenada en el puntero: " << ptr << endl;
	cout << "Direccion del puntero (variable ptr): " << &ptr << endl;

    return 0;
}
