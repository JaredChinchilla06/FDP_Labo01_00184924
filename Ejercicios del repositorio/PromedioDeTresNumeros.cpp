#include <iostream>
using namespace std;

int main(){

    float nota1 = 0, nota2 = 0, nota3 = 0, promedio;

    cout << "Ingrese la primera nota: " << endl;
    cin >> nota1;

    cout << "Ingrese la segunda nota: " << endl;
    cin >> nota2;

    cout << "Ingrese la tercera nota: " << endl;
    cin >> nota3;

    promedio = (nota1 + nota2 + nota3) / 3;

    cout << "El promedio final es: " << promedio << endl;


    return 0;
}