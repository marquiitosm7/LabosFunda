#include <iostream>


using namespace std;

int n;
int cont=0;

int main(){

int Igual[n];

cout<<"Tamano del arreglo:"<<endl;
cin>>n;


for (int i = 0; i < n; i++)
{
   cout<<"ingrese los valores del arreglo:"<<endl;
   cin>>Igual[i];
  
}

if (Igual[n]==Igual[n])
{
    cout <<"Los numeros que se repiten son: "<<cont<<endl;
    cont++;
}




return 0;
}