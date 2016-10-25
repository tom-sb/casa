#include <iostream>
using namespace std ;

int main ()
{
  const string message = "hello world";
  int n;
  
  //2.1
  cout <<message<<endl;
  
   
  //2.2
  cout <<"n veces:";
  cin>>n;
  
  for(int i=0;i<n;i++)
    cout <<i+1<<".- hello world"<<endl;
  
  
  cout <<endl;
  int j=0;
  while(j<n)
  {
    cout <<j+1<<".- hello world"<<endl;
    j++;
  }
  
  
  cout <<endl;
  int k=0;
  do
  {
    cout <<k+1<<".- hello world"<<endl;
    k++;
  }
  while(k<n);
  
  return 0;
}
