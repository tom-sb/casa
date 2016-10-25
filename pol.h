//#ifndef POLIGONO_H_INCLUDED
//#define POLIGONO_H_INCLUDED
  
class Poligono
{
    private :
        int lados;
        float largo;
    public :
        Poligono();
        Poligono(int,float);
        void asignarLados(int);
        void asignarLargo(float);
        int obtenerP();
        float obtenerS();
};
 
//#endif // POLIGONO_H_INCLUDED
