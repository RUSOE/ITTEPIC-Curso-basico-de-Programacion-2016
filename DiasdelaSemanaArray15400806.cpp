#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
	char *dias[] = {NULL, "Lunes", "Martes", "Miercoles", "Jueves","Viernes","Sabado","Domingo" };
   int d;

   cout<<"Proporciona el dia"<<endl;
   cin>>d;

   	if(d>0 && d<7){
      	  cout<<dias[d]<<endl;
		}else{
      		cout<<"El numero no esta en el rango"<<endl;
      }

   getch();
}