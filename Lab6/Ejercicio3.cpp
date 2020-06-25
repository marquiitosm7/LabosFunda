#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;


int n=0;
double incerteza, sumas,promedio,suma;

int main(){

double Arreglo [n];


cout<<"Numero de Mediciones: "<<endl;
cin>>n;

for (int i = 0; i < n; i++)
{
   cout<<"Medicion :"<<endl;
   cin>>Arreglo[i];
}


for ( int i = 0 ;i< n ;i++){
suma = suma + Arreglo[i];

}

 promedio = suma/n;

for (int i = 0; i < n; i++)
{
    sumas = sumas + ((Arreglo[i]+promedio)*(Arreglo[i]+promedio));
    
}


incerteza = sqrt( (1 / (n-1))*sumas);

cout<<"La incerteza es: "<<incerteza<<endl;



    return 0;
}

