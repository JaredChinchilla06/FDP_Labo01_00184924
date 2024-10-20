#include <iostream>
using namespace std;

int main(){

    int decimal, bin;

    cout << "Ingrese un numero en base decimal para convertirlo en binario" << endl;
    cin >> decimal;

    while(decimal > 0){
        
        bin = decimal % 2;
        decimal /= 2;
        
        cout << "Su numero en binario es: " << bin << endl;
        for(int i = bin - 1; i >= 0; i--){
            
        }

    }
    
    return 0;
}