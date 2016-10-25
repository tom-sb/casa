#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
 
class Poligono
{
    private:
        int vert;
        float tam;
    public:
        Poligono();
        Poligono(int,float);
        void asig_n_vert(int);
        void asig_tam(float);
        int perimetro();
        float area();
};


int main()
{
    int nver,op=0;
    float lar;
    Poligono *poli = new Poligono;
        while (op==0)
		{
            cout <<endl<< "ingresa n vertices" << endl;
            cin >> nver;
            cout <<endl<< "ingresa tamaño o largo" << endl;
            cin >> lar;

            poli->asig_n_vert(nver);
            poli->asig_tam(lar);
            cout <<endl<< "perimetro del poligono:  " << poli->perimetro() << endl;
            cout <<endl<< "superficie del poligono: " << poli->area() << endl;
            cout <<endl<< "0 (salir)/otro (seguir)" << endl;
            cin >> op;           
        }
}


Poligono::Poligono()
{
    vert = 0;
    tam = 0;
}
 
Poligono::Poligono(int px,float py)
{
    vert = px;
    tam = py;
}
 
void Poligono::asig_n_vert(int a)
{
    vert = a;
}
 
void Poligono::asig_tam(float a)
{
    tam = a;
}
 
int Poligono::perimetro()
{
    return(vert*tam);
}
 
float Poligono::area()
{
    float a,p,rad;
    const double PI = 3.1415926;
    rad = (360/(2*vert)) * (PI / 180);
    a = tam/(2*(tan(rad)));
    p = vert*tam;
    return((a*p)/2);
}

