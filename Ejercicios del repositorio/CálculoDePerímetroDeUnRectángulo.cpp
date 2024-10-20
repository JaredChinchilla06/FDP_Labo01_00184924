#include <iostream>
using namespace std;

int main(){

    float Perim, base, altura;

    cout << "ingrese la base del rectangulo: " << endl;
    cin >> base;

    cout << "Ingrese la altura del rectangulo: " << endl;
    cin >> altura;

    Perim = 2 * (base + altura);

    cout << "El perimetro de su cuadrado es: " << Perim << endl;


    return 0;
}