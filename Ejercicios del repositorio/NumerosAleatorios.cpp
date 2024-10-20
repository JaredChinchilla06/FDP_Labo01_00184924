#include <iostream>
#include <math.h>
using namespace std;

int main(){

     srand(time(0));
    
        int numeroAleatorio = 1 + rand() % 100;   

        cout << "Su numero aleatorio es: " << numeroAleatorio << endl;

    return 0;
}