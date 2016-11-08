#include <iostream>

using namespace std;

class Point
{
    private:
          int x,y;
    public:
        Point(int _x,int _y): x(_x),y(_y) {}
        Point(): x(0),y(0) {}
        
        int getX() {return x;}
        int getY() {return y;}
          
};

class Pointarray
{
    private:
        int size;
        Point *pts;
        
    public:
        Pointarray();
        Pointarray(const Point pts[],const int size);
        Pointarray(const Point &pvs);
        ~Pointarray();
          //void clear();
          //int getsize()const{return size;}
          //void pushback(const Point &p);
          //void insert();
          //void remove();
          
};



Pointarray::Pointarray()
{
    this->size=0;
    this->pts = new Point[size];
}

Pointarray::Pointarray(const Point pts[],const int tam)
{
    this->size=tam;
    this->pts=new Point[tam];
    for(int i=0;i<tam;i++)
    {
        this->pts[i] = pts[i];
       
    }
    cout<<pts[3]<<endl;
}

Pointarray::~Pointarray()
{
    delete[] pts;
}


Pointarray::Pointarray(Pointarray &pvs)
{
    this->size=tam;
    this->pts=new Point[tam];
    for(int i=0;i<tam;i++)
    {
        this->pts[i] = pvs.pts[i];
       
    }
}


int main()
{
    Point *p=new Point(5,3);

}

