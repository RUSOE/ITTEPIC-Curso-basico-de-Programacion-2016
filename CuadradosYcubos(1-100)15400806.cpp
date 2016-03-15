/*
	"Introduccion al ciclo for() 'suma de cuadrados y cubos'
	Jose Alfredo de Jesus Aguiar Arce
   Ingenieria mecatronica
   Instituto tecnologico de tepic
*/
#include <iostream.h>
#include <conio.h>
#include <math.h>

int sumaSq,sumaC,sq,c = 0;

void main()
{

	for(int i = 1; i <=100;i++)
   {
   	sq = pow(i,2);
      c = pow(i,3);

      sumaSq = sumaSq + sq;
      sumaC = sumaC + c;

   	cout<<i<<" "<<sq<<" "<<c<<endl;

   }
   cout<<"La suma de cuadrados es "<<sumaSq<<endl;
   cout<<"La suma de cubos es "<<sumaC<<endl;
   getch();
}
