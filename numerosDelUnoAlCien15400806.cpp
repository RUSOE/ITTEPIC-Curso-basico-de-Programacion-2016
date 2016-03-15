/*
	"Introduccion al ciclo for()
	Jose Alfredo de Jesus Aguiar Arce
   Ingenieria mecatronica
   Instituto tecnologico de tepic
*/
#include <iostream.h>
#include <conio.h>

int suma = 0;

void main()
{
	for(int i = 1; i <=100;i++)
   {
   	cout<<i<<endl;
      suma = suma + i;
   }
   cout<<"La suma es "<<suma<<endl;
   getch();
}
