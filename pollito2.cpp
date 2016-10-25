#include <iostream>

using namespace std ;
int main ()
{
  int n=0,sum=0,max=0,min=0,val=0;
  cout <<"n veces:";
  cin>>n;
  for (int i=0;i<n;i++)
  {
    cin>>val;
    min=val;
    if (val>=max) 
      max=val;
    else 
      max=max;
    if (val<=min) 
      min=val;
    else 
      min=min;
    sum+=val;
  }
  cout <<"promedio: "<<sum/n<<"  maximo:  "<<max<<"  minimo:  "<<min<<endl;

  
  
  
  return 0;
}

