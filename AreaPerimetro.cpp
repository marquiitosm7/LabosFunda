#include <iostream>

using namespace std;

int main (){

double Radio;
double PI= 3.1415;

cout<<"Escriba el radio:"<<endl;
cin>>Radio;

double Area= PI*(Radio*Radio);

cout<<"El Area del Circulo es:"<<Area<<endl;

double Perimetro= (2*PI*Radio);

cout<<"El perimetro del Circulo es:"<<Perimetro<< endl;


  return 0 ;
}