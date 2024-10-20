#include <iostream>
using namespace std;

int main(){

    int num, resi = 0;

    cout << "Ingrese un numero para saber si es par o imppar" << endl;
    cin >> num;

    if (num % 2 == resi)
    {
        cout << num << " Es par" << endl;
    } else {
        cout << num << " Es impar" << endl;
    }
    

    return 0;
}