#include <iostream>
#include <stdlib.h>
#include "pol.h"
 
using namespace std;
 
int main()
{
    int lad,op=1;
    float lar;
    Poligono *poli = new Poligono;
        while (op){
            cout <<endl<< "Ingrese Lados" << endl;
            cin >> lad;
            cout <<endl<< "Ingrese Largo" << endl;
            cin >> lar;
            poli->asignarLados(lad);
            poli->asignarLargo(lar);
            cout <<endl<< "El perimetro del poligono es =  " << poli->obtenerP() << endl;
            cout <<endl<< "La superficie del poligono es = " << poli->obtenerS() << endl;
            cout <<endl<< "0 para salir, otro para repetir" << endl;
            cin >> op;
            system("clear");
            system("cls");
        }
}


