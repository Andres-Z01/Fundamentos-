#ifndef INGRESAR_PRODUCTOS_H_INCLUDED
#define INGRESAR_PRODUCTOS_H_INCLUDED
#include <iostream>
using namespace std;
void ingresarProductos() {
    int opcion;
    cout << "\n=== Ingresar Productos y Precios ===" << endl;
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        cout << i + 1 << ". " << productos[i] << endl;
    }
    cout << "Seleccione el número del producto para modificar (1-" << NUM_PRODUCTOS << "): ";
    cin >> opcion;

    if (opcion < 1 || opcion > NUM_PRODUCTOS) {
        cout << "Opción inválida. Intente nuevamente." << endl;
        return;
    }

    int indice = opcion - 1;
    cout << "Ingrese la nueva cantidad de " << productos[indice] << ": ";
    cin >> inventario[indice];

    if (inventario[indice] < 0) {
        cout << "Cantidad inválida. Intente nuevamente." << endl;
        return;
    }
    cout << "Ingrese el nuevo precio de " << productos[indice] << ": $";
    cin >> precios[indice];

    if (precios[indice] <= 0) {
        cout << "Precio inválido. Intente nuevamente." << endl;
        return;
    }

    cout << "Producto actualizado: " << productos[indice] << " - $" << precios[indice] << " (Cantidad: " << inventario[indice] << ")" << endl;
}



#endif // INGRESAR_PRODUCTOS_H_INCLUDED
