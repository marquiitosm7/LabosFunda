#include <iostream>
#include <string>
#include <string.h>

using namespace std;


const int longCad = 20;

int n;
float SumaA;
string cad;

struct costoPorArticulo{

char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo1;


};

int FP(costoPorArticulo  Factura[]);
int FP1(costoPorArticulo Factura[]);
int Mostrar(costoPorArticulo Factura[]);
int Suma(costoPorArticulo Factura[]);

int main (){

costoPorArticulo Factura[n];

cout<<"Numero de articulos a ingresar: "<<endl;
cin>>n;
cin.ignore(100,'\n');

FP(Factura);

Mostrar(Factura);


return 0;
}
int FP(costoPorArticulo Factura[]){
cout<<"ingrese nombre, precio, y cantidad de articulos"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<"Nombre: ";
    getline(cin,cad,'\n');
    strncpy(Factura[i].nombreArticul, cad.c_str(), longCad);
    Factura[i].nombreArticul[longCad]= '\0';

    cout<<"Cantidad: ";
    cin>>Factura[i].cantidad;

    cout<<"Precio: ";
    cin>>Factura[i].precio;
    cin.ignore(100,'\n');

    
}
 cout<<endl;
}

int FP1(costoPorArticulo Factura[]){
for ( int i = 0 ;i< n ;i++){
Factura[i].costoPorArticulo1 = Factura[i].cantidad*Factura[i].precio;
cout<<endl;
}


}

int Mostrar(costoPorArticulo Factura[]){

cout<<">>>>>>>> F A C T U R A <<<<<<< "<< endl;
FP1(Factura);

for (int i = 0; i < n; i++){

    cout<<Factura[i].nombreArticul<<endl;
    cout<<"Cantidad: "<<Factura[i].cantidad<<endl;
    cout<<"Precio: "<<Factura[i].precio<<endl;
    cout<<"Costo Total por Articulo: "<<Factura[i].costoPorArticulo1<<endl;

}
Suma(Factura);
cout<<endl;

}

int Suma(costoPorArticulo Factura[]){
for (int i = 0; i < n; i++){
SumaA= SumaA + Factura[i].costoPorArticulo1;
    
   
}
cout<<"Total a pagar: " <<SumaA<<endl; 

}