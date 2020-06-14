#include <iostream>


using namespace std;

int Anov(int);

int main (){
int a;
cout<< "Ingrese un Ano:"<<endl;
cin>>a;

Anov(a);

return 0;
}
int Anov(int a){

if (a%4==0 && a%100!=0|| a %400==0){
    cout<< "El Ano es bisiesto. "<<endl;
}
else {
    cout<< "El Ano no es bisiesto. "<<endl;

}
}