#include <iostream>


using namespace std;

int main(){

int cont=0, orden;

int Arreglo[100];

for (int i = 0; i < 100; i++)
{
    if (i %2==0)
    {
        
    cout<<" ";

    }
    else
    {
        Arreglo[cont]=i;
        cont++;
    }
    
}

for (int  i = 0; i < cont; i++)
{
    for (int j=i+1; j < cont; j++)
    {
        if (Arreglo[i]<Arreglo[j])
        {
            orden=Arreglo[i];
            Arreglo[i]=Arreglo[j];
            Arreglo[j]=orden;
        }
        
    }
    
}

for (int i = 0; i < cont; i++)
{
    cout<<Arreglo[i]<<" ";
}


return 0;
}