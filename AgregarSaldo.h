#ifndef AGREGARSALDO_H_INCLUDED
#define AGREGARSALDO_H_INCLUDED
#include <iostream>

using namespace std;

double saldo = 0.0;
void agregarsaldo(){
    double monto;
    cout << "Ingrese el saldo que desea: $";
    cin >> monto;

    if (monto > 0) {
        saldo += monto;
        cout << "Su saldo es de: $" << saldo << endl;
    } else {
        cout << "Monto inválido. Intente nuevamente." << endl;
    }
}

#endif // AGREGARSALDO_H_INCLUDED
