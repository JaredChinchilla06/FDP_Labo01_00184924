#include <iostream>
using namespace std;

int main(){

    bool resu1, resu2, resu3;
    int num1, num2;

    cout << "Ingrese su primer numero para comparar: " << endl;
    cin >> num1;

    cout << "Ingrese su segundo numero para comparar: " << endl;
    cin >> num2;

    resu1 = (num1 == num2);

    cout << "La primera comparacion es: " << resu1 << endl;

    cout << "Ingrese su primer numero para comparar: " << endl;
    cin >> num1;

    cout << "Ingrese su segundo numero para comparar: " << endl;
    cin >> num2;

    resu2 = (num1 > num2);

    cout << "La segunda comparacion es: " << resu2 << endl;

    cout << "Ingrese su primer numero para comparar: " << endl;
    cin >> num1;

    cout << "Ingrese su segundo numero para comparar: " << endl;
    cin >> num2;

    resu3 = (num1 < num2);

    cout << "La tercera comparacion es: " << resu3 << endl;

    return 0;
}