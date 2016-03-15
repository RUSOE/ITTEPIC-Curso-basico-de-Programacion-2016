#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

int f,t = 0;
void main()
{

   t = 1;

   cout<<"INGRESE UN NUMERO PARA OBTENER SU FACTORIAL "<<endl;
   cin>>f;

	for(int i = 1; i<=f;i++)
   {
      t=t*i;
   	
   }
   
   cout<<"el factorial de  "<<f<<" es = "<<t<<endl;
	getch();
}
