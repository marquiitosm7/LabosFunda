#include <iostream>

using namespace std;

double suma (double Arreglo[] );

int n;

double suma1 =0;

int main(){

double Arreglo[n];


cout<<"Tamano del arreglo:"<<endl;
cin>>n;


for (int i = 0; i < n; i++)
{
   cout<<"ingrese los valores del arreglo:"<<endl;
   cin>>Arreglo[i];
  
}

cout << "Los elementos del arreglo son: " ;
for ( int i = 0 ;i< n ;i++){
cout << Arreglo [i] << " " ; }

cout<<endl;

suma( Arreglo);

return 0;    
}

double suma (double Arreglo[]){
for ( int i = 0 ;i< n ;i++){
suma1 = suma1 + Arreglo[i];
}

double promedio = suma1/n;

cout<<"El promedio es :"<<promedio<<endl;

}