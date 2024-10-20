#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int num1, resu, resu2, n = 0, m = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num1;

    n = 2;
    m = 3;

    resu = pow(num1, n);
    resu2 = pow(num1, m);

    cout << "El cuadrado de su numero es: " << resu << endl;
    cout << "El cubo de su numero es: " << resu2 << endl;

    return 0;
}