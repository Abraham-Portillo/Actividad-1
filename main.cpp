#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int a=3;
    int cuadrado=pow(a,3);
    int b=100;
    int raiz =sqrt(b);
    const float pi=3.14;
    int radio=4;
    float area = pi*pow(radio,2);
    printf("El valor del cubo de a es %d ",cuadrado);
    printf("/n   El valor de la constante Pi es %.if",pi);
    printf("/n   El valor de la raiz de 100 es %d", raiz );
    printf("/n   El valor del area de la circunferencia es %.2f m^2",area);

    cout<<   "Esta actividad fue realizada por Abraham Portillo/";
    return 0;
}
