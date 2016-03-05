/*
"Calcula el area de un Trapecio"
Hecho por Alfredo Aguiar Arce
Ingenieria en mecatronica
Instituto tecnologico de Tepic
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

//Realiza la operacion para calcular el area del trapecio (((BASE MAYOR+ MASE MENOR)*ALTURA)/2)
	At = (((b+B)*h)/2);
	cout<<"el area del Trapecio es : "<<At;
	
	getch();
}
