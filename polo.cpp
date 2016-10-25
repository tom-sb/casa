#include "pol.h"
#include <math.h>
 
Poligono::Poligono(){
    lados = 0;
    largo = 0;
}
 
Poligono::Poligono(int px,float py){
    lados = px;
    largo = py;
}
 
void Poligono::asignarLados(int a){
    lados = a;
}
 
void Poligono::asignarLargo(float a){
    largo = a;
}
 
int Poligono::obtenerP(){
    return(lados*largo);
}
 
float Poligono::obtenerS(){
    float a,p,rad;
    const double PI = 3.1415926;
    rad = (360/(2*lados)) * (PI / 180);
    a = largo/(2*(tan(rad)));
    p = lados*largo;
    return((a*p)/2);
}


