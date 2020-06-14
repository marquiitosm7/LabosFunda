#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


int Adivina(int);
int a;
int cont=0;

int main (){


cout<<"A D I V I N A  E L  N U M E R O. "<<endl<<endl;
cout<<"Tienes 5 intentos, suerte :3. "<<endl<<endl;

 Adivina(a);

return 0;
}

int Adivina(int a){
int b;
srand(time(NULL));
rand()%(101);

for (int i = 0; i < 5; i++)
{
   
cout<<"Ingresa un numero:"<<endl;
cin>>b;
cont++;

 if (b==7)
 {
    cout<<"Adivinaste el numero!<3"<<endl;
      
}
else if (b<7){

cout<< "El numero que ingresaste es menor"<<endl;
cout<<"LLevas  "<<cont<<" intentos."<<endl;
}
else if(b>7) {

   cout<<"El numero que ingresaste es mayor"<<endl;
cout<<"LLevas  "<<cont<<" intentos."<<endl;

}


 }
 

}