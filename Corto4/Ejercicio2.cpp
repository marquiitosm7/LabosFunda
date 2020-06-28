#include <iostream>


using namespace std;

double Prom (double Areglo[] );
double mym(double Arreglo[]);

double  promedio,suma;

int main(){

double Arreglo [25];

cout << "Las estaturas de los Estuidiantes son: "<<endl<<endl;

Prom(Arreglo);

mym(Arreglo);

return 0;

}

double Prom(double Arreglo[25]){


for (int i = 0; i < 25; i++)
{
   cout<<"Estatura :"<<endl;
   cin>>Arreglo[i];
}


for ( int i = 0 ;i< 25 ;i++){
suma = suma + Arreglo[i];

}

 promedio = suma/25;

 cout<<"El promedio de la estatura es: "<<promedio<<endl;

}

double mym(double Arreglo[25]){
int p=0;
int b=0;

    for (int i = 0; i < 25; i++)
    {
        if (Arreglo[i]<promedio){
            p++;

        }

        else if (Arreglo[i]>promedio)
{
    b++;
}
    }
    



cout<<"Los alumnos arriba de la media son: "<<b<<endl;
cout<<"Los alumno bajo la media son: "<<p<<endl;



}