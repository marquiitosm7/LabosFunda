#include <iostream>
#include <string.h>

using namespace std;

int sus(char Arreglo[],char Arreglo2[] );

int main() {

char Arreglo[100];
char Arreglo2[100];



    cout << "Ingrese la palabra a decodificar: "<<endl;
    cin>>Arreglo;
    
    cout<<endl;

sus( Arreglo,  Arreglo2);

cout<<"La palabra decodificada es: "<<Arreglo2<<endl;

cout<<endl;
return 0;
    
}

int sus(char Arreglo [], char Arreglo2[]){

int a, b, tam;
tam=strlen(Arreglo);
b=0;
for ( a = 0; a < tam; a++)
{
    if (Arreglo[a]=='m')
    {
        Arreglo2[b]='0';
        b++;
    }
    else if (Arreglo[a]=='u')
    {
        Arreglo2[b]='1';
        b++;
    }
    else if (Arreglo[a]=='r')
    {
        Arreglo2[b]='2';
        b++;
    }
    else if (Arreglo[a]=='c')
    {
        Arreglo2[b]='3';
        b++;
    }
    else if (Arreglo[a]=='i')
    {
        Arreglo2[b]='4';
        b++;
    }
    else if (Arreglo[a]=='e')
    {
        Arreglo2[b]='5';
        b++;
    }
    else if (Arreglo[a]=='l')
    {
        Arreglo2[b]='6';
        b++;
    }
    else if (Arreglo[a]=='a')
    {
        Arreglo2[b]='7';
        b++;
    }
    else if (Arreglo[a]=='g')
    {
        Arreglo2[b]='8';
        b++;
    }
    else if (Arreglo[a]=='o')
    {
        Arreglo2[b]='9';
        b++;
    }
    else
    {
      Arreglo2[b]=Arreglo[a];
      b++;
    }
    
  
}

Arreglo2[b]='\0';

}