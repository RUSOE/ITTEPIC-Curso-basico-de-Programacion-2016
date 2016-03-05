//Calcula el area de un circulo
/*
Hecho por Alfredo Aguiar Arce
*/
#include <iostream.h>
#include <conio.h>


float r,ac;

void main()
{
 	cout<<"Proporciona valor radio : ";
  	cin>>r;
	ac = 3.14*(r*r);
	cout<<"el area del circulo es : "<<ac;
	getch();
}
