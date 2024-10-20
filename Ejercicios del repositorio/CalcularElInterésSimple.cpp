#include <iostream>
using namespace std;

int main(){

    float capital, tasaInteres, tiempo, interesSimple;

    cout << "Hola, ingresa los siguientes datos para saber tu interes simple: " << endl;
    cout << "Ingrese su capital:  " << endl;
    cin >> capital;

    cout << "Ingrese su tasa de interes:  " << endl;
    cin >> tasaInteres;

    cout << "Ingrese su tiempo:  " << endl;
    cin >> tiempo;

    interesSimple = (capital * tasaInteres * tiempo);

    cout << "Su interes simple es: " << interesSimple << endl;

    return 0;
}