#include <iostream>
#include <cstdlib>

using namespace std;

// Variable global ubicada en el segmento de datos
int globalVar = 10;

void mostrarSegmentos(){
    // Variable local localVar ubicada en el STACK
    int localVar = 20;

    // Memoria dinamica → ubicada en el HEAP
    int* heapVar = new int(30);

    cout << "=== SEGMENTOS DE MEMORIA ===" << endl;
    cout << "Variable global (data segment): " << &globalVar << endl;
    cout << "Variable local (stack):         " << &localVar << endl;
    cout << "Variable en heap:               " << heapVar << endl;

    delete heapVar; // liberar memoria
}

int main(int argc, char* argv[]){
    cout << "=== DEMOSTRACION DE STACK, HEAP Y CODE ===" << endl;

    cout << "Direccion de la funcion 'mostrarSegmentos' (code segment): "
         << (void*) &mostrarSegmentos << endl;

    mostrarSegmentos();

    return 0;
}
