#include <iostream>
using namespace std;

//1. Diseñar la funcion que calcule el cubo de un numero
//5 x 5 x 5 = 125

int cubo(int num)
{
    return (num*num*num);
}

  int main()
  {
  cout<<endl<<"El cubo de 5 es "<<cubo(5);
  cout<<endl<<"El cubo de 6 es "<<cubo(6);
  cout<<endl<<"El cubo de 7 es "<<cubo(7);

  int num;
  cout<<" Ingresa un entero: ";
  cin>>num;
  cout<<"El cubo de "<<num<< " es "<<cubo(num);
    return 0;
}
