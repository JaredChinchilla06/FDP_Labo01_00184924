#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float x1, x2, y1, y2, dis;

    cout << "Ingrese x1: " << endl;
    cin >> x1;

    cout << "Ingrese x2: " << endl;
    cin >> x2;

    cout << "Ingrese y1: " << endl;
    cin >> y1;

    cout << "Ingrese y2: " << endl;
    cin >> y2;

    dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    cout << "La distancia entre los puntos es: " << dis << endl;

    return 0;
}