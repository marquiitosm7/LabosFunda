#include <iostream>

using namespace std;

int n;

int main(){

int Arreglo[n];

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


return 0;    
}