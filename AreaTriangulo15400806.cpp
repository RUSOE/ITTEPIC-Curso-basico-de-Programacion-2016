/*
"Calcula el area de un circulo"
Hecho por Alfredo Aguiar Arce.
Ingenieria en mecatronica.
*/
#include <iostream.h>
#include <conio.h>

float b,h,A;
void main()
{
	cout<<"Proporciona valor de base : ";
	cin>>b;
	
   	cout<<"Proporciona valor de bla altura : ";
   	cin>>h;
   	
   	//Formula para area de triangulo ((Base*Altura)/2)
	A = ((b*h)/2);
	cout<<"el area del triangulo es : "<<A;
	
	getch();
}
