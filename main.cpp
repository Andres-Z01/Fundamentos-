#include "C:\Users\Andres\Documents\Fundamentos de programacion\Laboratrio\AgregarSaldo.h"
#include "C:\Users\Andres\Documents\Fundamentos de programacion\Laboratrio\Comprar.h"
#include "C:\Users\Andres\Documents\Fundamentos de programacion\Laboratrio\Consutar_inventario.h"
#include "C:\Users\Andres\Documents\Fundamentos de programacion\Laboratrio\verificarsaldo.h"
#include "C:\Users\Andres\Documents\Fundamentos de programacion\Laboratrio\Ingresar_Productos.h"
#include <iostream>
#include <string>

using namespace std;
void mostrarMenu() {
    cout << "----- Maquina Expendedora -----" << endl;
    cout << "1. Ingresar saldo" << endl;
    cout << "2. Comprar producto" << endl;
    cout << "3. Verificar saldo restante" << endl;
    cout << "4. Consultar inventario" << endl;
    cout << "5. Ingresar productos y precios" << endl;
    cout << "6. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarsaldo();
                break;
            case 2:
                comprarProducto();
                break;
            case 3:
                verificarSaldo();
                break;
            case 4:
                consultarInventario();
                break;
            case 5:
                ingresarProductos();
                break;
            case 6:
                cout << "Gracias por usar la máquina expendedora. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 6);

    return 0;
}
