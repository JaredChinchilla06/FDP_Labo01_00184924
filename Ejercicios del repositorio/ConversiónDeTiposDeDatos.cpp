#include <iostream>
using namespace std;

int main(){

    double variable1, save;
    int variable2, save2;

    cout << "Ingresa una variable de tipo doble: " << endl;
    cin >> variable1;

    cout << "ingresa una variable de tipo entera: " << endl;
    cin >> variable2;

    save = variable2;
    save2 = variable1;

    cout << "Su nueva varieble de tipo doble es: " << save << endl;

    cout << "Su nueva variable de tipo entera es: " << save2 << endl;


    return 0;
}