#include <iostream>
using namespace std;

int main(){

    float peso, altura, imc;

    cout << "Hola, ingresa tu peso por favor: " << endl;
    cin >> peso;

    cout << "Ingresa tambien tu altura: " << endl;
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "Su IMC es de: " << imc;

    return 0;
}