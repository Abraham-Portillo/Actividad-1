#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;


int a, b, c, d, e, f, g, h,resta, suma, divi, multi;

cout<<"ingresa el primer numero para la suma/";
cin>>a;
cout<<"ingresa el segundo numero para la suma/";
cin>>b;

    suma=a+b;

cout<<"El resultado de la suma es /"<<suma;

cout<<"  siguiente operacion/";
cout<<"ingresa el primer numero para la resta/";
cin>>c;
cout<<"ingresa el segundo numero para la resta/";
cin>>d;

    resta=c-d;

    cout<<"El resultado de la resta es /"<<resta;

    cout<<"  siguiente operacion/";
    cout<<"ingresa el primer numero para la multiplicacion/";
cin>>e;
cout<<"ingresa el segundo numero para la multiplicacion/";
cin>>f;

    multi=e*f;

    cout<<"El resultado de la multiplicacion es /"<<multi;

    cout<<"  siguiente operacion/";
    cout<<"ingresa el primer numero para la division/";
cin>>g;
cout<<"ingresa el segundo numero para la division/";
cin>>h;

    divi=g/h;

    cout<<"El resultado de la division es /"<<divi;

    cout<<   "Esta actividad fue realizada por Abraham Portillo/";
return 0;
}

