#ifndef COMPRAR_H_INCLUDED
#define COMPRAR_H_INCLUDED
#include <iostream>

using namespace std;
const int NUM_PRODUCTOS = 5;
string productos[NUM_PRODUCTOS] = {"cola", "jugo", "papas", "Chocolate", "doritos"};
double precios[NUM_PRODUCTOS] = {1.00, 1.50, 2.00, 2.50, 3.00};
int inventario[NUM_PRODUCTOS] = {10, 8, 5, 7, 4};


void comprarProducto() {
    cout << "=== Productos Disponibles ===" << endl;
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        cout << i + 1 << ". " << productos[i] << " - $" << precios[i]
             << " (Cantidad: " << inventario[i] << ")" << endl;
    }

    int opcion;
    cout << "Seleccione un producto (1-" << NUM_PRODUCTOS << "): ";
    cin >> opcion;

    if (opcion < 1 || opcion > NUM_PRODUCTOS) {
        cout << "Opción inválida. Intente nuevamente." << endl;
        return;
    }

    int indice = opcion - 1;

    if (inventario[indice] == 0) {
        cout << "Lo sentimos, el producto seleccionado está agotado." << endl;
    } else if (saldo < precios[indice]) {
        cout << "Saldo insuficiente para comprar " << productos[indice] << "." << endl;
    } else {
        saldo -= precios[indice];
        inventario[indice]--;
        cout << "¡Gracias por su compra! Ha adquirido " << productos[indice] << "." << endl;
        cout << "Saldo restante: $" << saldo << endl;
    }
}



#endif // COMPRAR_H_INCLUDED
