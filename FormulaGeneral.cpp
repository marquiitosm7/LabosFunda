#include <iostream>
#include <math.h>

using namespace std;

int main () {

double Generalx1, Generalx2;
int a, b, c;

cout<< "Valor de a:"<<endl;
cin>>a;

cout<< "Valor de b:"<<endl;
cin>>b;

cout<< "Valor de c:"<<endl;
cin>>c;

Generalx1=  (-(b) + sqrt(b*b-4*a*c))/(2*a);

cout<<"Su resultado en x1 es:"<<Generalx1<<endl;

Generalx2=  (-(b) - sqrt(b*b-4*a*c))/(2*a);

cout<<"Su resultado en x2 es:"<<Generalx2<<endl;


    return 0;
}