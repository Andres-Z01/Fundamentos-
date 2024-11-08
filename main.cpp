#include <iostream>

using namespace std;

int main()
{
    float Vi,R,I,Vf,Vt;
    cout << "ingrese el valor del voltaje inicial " << endl;
    cin >> Vi;
    cout << "ingrese el valor de la Resistencia " << endl;
    cin >> R;
    cout << "ingrese el valor de la Corriente " << endl;
    cin >> I;

    Vf = I*R;
    Vt = Vi+Vf;
    cout << "el voltaje total es " << Vt << endl;

    if (Vt==0){
         cout << "El Foco esta Apagado" << endl;
    }
    else if (Vt>=0 or Vt<=5){
              cout << "El foco esta encencido " << endl;
    }
    else
    cout << " Corto Circuito" << endl;


    cout << "Hello world!" << endl;

    return 0;
}
