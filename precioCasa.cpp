#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    double costoCasa;
    double ingresoComprador;
    double enganche;
    double pagoMensual;
 
    cout << "ingrese el costo casa" << endl;
    cin >> costoCasa;
    cout << "ingrese el ingreso del comprador" << endl;
    cin >> ingresoComprador;
    
  
    if (ingresoComprador<5000) {

        enganche = 0.12 * costoCasa;
        pagoMensual = (costoCasa - enganche) / 120;
    }

    if (ingresoComprador >= 5000) {

        enganche = 0.2 * costoCasa;
        pagoMensual = (costoCasa - enganche) / 120;
    }

    cout << "el costo del enganche es: " <<enganche<< endl;
    cout << "el pago mensual es: " <<pagoMensual<< endl;

 
  
    return 0;
}

