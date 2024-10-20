#include <iostream>
using namespace std;

int main(){

    int dia;

    cout << "Inrese un numero que represente el dia de la semana: " << endl;
    cin >> dia;

    if (dia == 1){
        cout << "Es lunes;" << endl;

    } else if (dia == 2){
        cout << "Es Martes" << endl;

    } else if (dia == 3){
        cout << "Es Miercoles" << endl;

    } else if (dia == 4){
        cout << "Es Jueves" << endl;

    } else if (dia == 5){
        cout << "ES VIERNESSSSSSSS" << endl;

    } else if (dia == 6){
        cout << "Es Sabado" << endl;

    } else if (dia == 7){
        cout << "Es Domingo" << endl;
    } else {
        cout << "Numero no valido" << endl;
    }

    return 0;
}

//Otra manera//

#include <iostream>
using namespace std;

int main()
{
    int Dias_De_Semana = 7;
    
    cout << "Los dias en una semana son: " << Dias_De_Semana << endl;

    return 0;
}