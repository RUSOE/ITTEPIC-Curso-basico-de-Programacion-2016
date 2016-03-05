//Calcula el area de un circulo
/*
Hecho por Alfredo Aguiar Arce
*/
#include <iostream.h>
#include <conio.h>


float b,B,h,At;

void main()
{
 	cout<<"Proporciona valor de base Menor : ";
  	cin>>b;
   cout<<"Proporciona valor de base Mayor : ";
   cin>>B;
   cout<<"Proporciona valor de bla altura : ";
   cin>>h;

	At = (((b+B)*h)/2);
	cout<<"el area del Trapecio es : "<<At;
	getch();


}
