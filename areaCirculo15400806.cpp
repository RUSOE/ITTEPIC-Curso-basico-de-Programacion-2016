/*
Calcula el area de un circulo
Hecho por Alfredo Aguiar Arce
Intituto Tecnologico de Tepic
*/
#include <iostream.h>
#include <conio.h>

float r,ac;
void main()
{
 	cout<<"Proporciona valor radio : ";
  	cin>>r;
  	
	ac = 3.14*(r*r);//Operacion para calcular el area del circulo
	cout<<"el area del circulo es : "<<ac;
	
	getch();
}
