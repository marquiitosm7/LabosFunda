#include <iostream>

using namespace std;

int For(int);



int usuario1;
double horas, horasx;
double salariototal, salarioreal;

int main (){


cout << "ingrese la cantidad de empleados:"<<endl;
cin>>usuario1;

For(usuario1);



return 0;
}

int For(int usuario1 ){
for (int i=0;i<usuario1;i++){
    cout <<"Numero de horas Trabajadas:"<<endl;
    cin>>horas;

    cout<<"Ingrese horas Extras de Trabajo:"<<endl;
    cin>>horasx;

    salariototal = (1.75*horas)+(2.50*horasx);
    cout<<"El salario total es: "<< salariototal<<endl;

    salarioreal = (salariototal-(salariototal*0.04)-(salariototal*0.0625));
    cout<<"El salario real es: "<< salarioreal<<endl;
}
}
