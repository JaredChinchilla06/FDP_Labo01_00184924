#include <iostream>
using namespace std;

int main(){

    int valor1 = 77, valor2 = 31;

    cout << "Su primer valor es: " << valor1 << endl;
    cout << "Su segundo valor es: " << valor2 << endl << endl;

    valor1 = valor1 + valor2;
    valor2 = valor1 - valor2;
    valor1 = valor1 - valor2;
    
    cout << "Su primer valor nuevo es: " << valor1 << endl;
    cout << "Su segundo valor nuevo es: " << valor2 << endl;

    return 0;
}