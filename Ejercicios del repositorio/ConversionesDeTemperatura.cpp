#include <iostream>
using namespace std;

int main(){

    float Cels, Farh;

    cout << "Ingrese la temperatura: " << endl;
    cin >> Cels;

    Farh = (Cels * 9/5) + 32;

    cout << "Su temperatura en Farhenheit es: " << Farh << endl;

    return 0;
}