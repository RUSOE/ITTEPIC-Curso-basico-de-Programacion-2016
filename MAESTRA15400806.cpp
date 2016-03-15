#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

int c,p,calificaciones = 0;
void main()
{


	for(int i = 1; i<=5;i++)
   {
         for(int a = 1; a<=3;a++)
      {

         cout<<"Alumno "<<i<<endl;
         cout<<"Ingresa tu calificacion de la unidad "<<a<<endl;
         cin>>c;
         calificaciones = calificaciones + c;
      }
         system("cls");
       p = calificaciones/3;
       if(p > 70)
       {
         cout<<"Aprovado "<<"promedio"<<p<<endl;
       }else{
         cout<<"Reprobado "<<"promedio"<<p<<endl;
      }
      p,calificaciones = 0;
      i = 1;
       system("pause");
       system("cls");
   	
   }
	getch();
}
