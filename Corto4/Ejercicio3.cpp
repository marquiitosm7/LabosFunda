#include <iostream>


using namespace std;

int n,  suma=0;
double nota1;

int llenar (int Arreglo[]);
double nota(int Arreglo[]);

int main() {

int Arreglo[5];

cout<<"ingrese el numero de estudiantes: "<<endl;
cin>>n;


llenar(Arreglo);


    return 0;
}
int llenar(int Arreglo[5]){
    for (int i = 0; i < n; i++)
    {

        for (int i = 0; i < 5; i++)
{
    cout<<"Ingresa tus notas: "<<endl;
    cin>>Arreglo[i];

    
}
nota(Arreglo);
    }
}

double nota (int Arreglo[5]){
for (int i = 0; i < 5; i++)
{
    suma = suma + Arreglo[i];
}

nota1= suma*0.2;

cout<<"Su nota es :"<<nota1<<endl;

}