#include <iostream>

using namespace std;

int main()
{
    float D,P,T,C,P1;
    cout << "ingrese notas de deberes " << endl;
    cin>> D;
    cout<<"ingrese notade pruebas" << endl;
    cin>> P;
    cout<< "ingrese valor de talleres" << endl;
    cin >> T;
    cout<< "ingrese el valor de conjunta" << endl;
    cin>> C;

    P1 = (D+P+T+C)/4;
    cout<< "el puntaje final del primer parcial es " << P1 << endl;

    if(P1=7-10){
        cout << "paso el primer parcial " << endl;
    }
    if (P1=0-6){
        cout << "no paso el primer parcial "<< endl;
    }
    return 0;
}
