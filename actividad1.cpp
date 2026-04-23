#include <iostream>
using namespace std;

int main(){
    int numero = 10;          // 1. Variable entera
    int* ptr = &numero;       // Puntero que guarda la dirección de 'numero'

    cout << "Valor inicial: " << numero << endl;
    cout << "Direccion de memoria: " << ptr << endl;

    *ptr = 25;  // 3. Modificar valor indirectamente usando puntero

    cout << "\nValor modificado: " << numero << endl;
    cout << "Direccion de memoria (igual): " << ptr << endl;

    return 0;
}
