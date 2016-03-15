#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

int r;
void main()
{

	for(int i = 0; i<=10;i++)
   {
   	cout<<"TABLA DE MULTIPLICAR DEL "<<i<<endl;
   		for(int a = 0; a<=10;a++)
   	{
      	r = i*a;
         cout<<i<<" x "<<a<<" = "<<r<<endl;
      }

      system("pause");
      system("cls");

   }
	getch();
}
