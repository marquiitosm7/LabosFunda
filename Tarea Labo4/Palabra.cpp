#include <iostream>
#include <cstring>

using namespace std;


int main (){

    char palabra[100];

 
    cout << "Introduce una palabra: \n ";
    cin >>  palabra;
    
    strlen(palabra);  
    
    if (strlen(palabra)<=10){

        cout << "La palabra tiene "<<strlen(palabra)<<" caracteres. \n";
 }
 
        else
        {
            cout <<"La Palabra supera los 10 caracteres. \n ";
        }
        
      if (strlen(palabra) %2==0)
    {
        cout<<"El numero de caracteres es " <<strlen(palabra)<< " y es Par. \n";
    }
    
    else
    {
        cout<<"El numero el caracteres  "<< strlen(palabra) <<" es Impar. \n";
    }
    



return 0;
}