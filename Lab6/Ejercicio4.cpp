#include <iostream>


using namespace std;

int Arreg1( int Arreglo1[] );
int Arreg2( int Arreglo2[] );
int Suma(int Arreglo1[] ,int Arreglo2[] );



int main(){

int Arreglo1[5];
int Arreglo2[5];


Arreg1( Arreglo1);
Arreg2( Arreglo2);

Suma( Arreglo1, Arreglo2 );




return 0;
}

int Arreg1(int Arreglo1[5]){
for ( int i = 0 ;i< 5 ;i++){
cout<<"Ingrese los valores del primer arreglo:"<<endl;
cin>>Arreglo1[i];
}
}

int Arreg2(int Arreglo2[5]){
for ( int i = 0 ;i< 5 ;i++){
cout<<"Ingrese los valores del segundo arreglo:"<<endl;
cin>>Arreglo2[i];
}
}

int Suma(int Arreglo1[] ,int Arreglo2[] ){

cout << "Los elementos del Tercer arreglo son: " ;
for ( int i = 0 ;i< 5 ;i++){
cout << Arreglo1 [i] << " " ;
cout<<Arreglo2[i]<<" "; }



}