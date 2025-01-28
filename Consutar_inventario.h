#ifndef CONSUTAR_INVENTARIO_H_INCLUDED
#define CONSUTAR_INVENTARIO_H_INCLUDED
#include <iostream>

using namespace std;
void consultarInventario() {
    cout << "=== Inventario ===" << endl;
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        cout << productos[i] << ": $" << precios[i] << " (Cantidad: " << inventario[i] << ")" << endl;
    }
}


#endif // CONSUTAR_INVENTARIO_H_INCLUDED
