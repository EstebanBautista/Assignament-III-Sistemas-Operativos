#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char* argv[]) {
    //Verificar argumentos
    if (argc < 3) {
        cout << "Uso: ./actividad4 <filas> <columnas>" << endl;
        return 1;
    }

    //1. Leer filas y columnas desde los argumentos
    int filas = atoi(argv[1]);
    int columnas = atoi(argv[2]);

    //Semilla aleatoria basada en el tiempo actual
    srand(time(0));

    // 2. Crear matriz dinamica 2D
    int** matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }

    // 3. Llenar la matriz con numeros aleatorios del 0 al 99
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    //Mostrar la matriz
    cout << "=== Matriz generada aleatoriamente (" << filas << "x" << columnas << ") ===" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    //4. Liberar memoria
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    cout << "\nMemoria liberada correctamente." << endl;
    return 0;
}
