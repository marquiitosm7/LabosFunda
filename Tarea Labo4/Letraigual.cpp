#include <iostream>
#include <cstring>

using namespace std;


int main (){

   char Palabra[100];
 
    cout << "Digita una palabra: ";
    cin >>  Palabra;
    
    strlen (Palabra);

    int n= strlen(Palabra);


    if (Palabra[0]==Palabra[n-1] ){

        cout<<"La letra inicial es igual a la final.";
    }

        else {
            cout<<"Son diferentes.";
        }



   

return 0;
}