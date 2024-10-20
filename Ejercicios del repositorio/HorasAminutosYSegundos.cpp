#include <iostream>
using namespace std;

int main(){

    int horas, minutos, segundos;

    cout << "Ingrese cuantas horas desea convertir a minutos y segundos: " << endl;
    cin >> horas;

    minutos = horas * 60;
    segundos = horas * 3600;

    cout << "Las horas ingresadas a minutos son: " << minutos << endl;
    cout << "Las horas ingresadas a segundos son: " << segundos << endl;

    return 0;
}