#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

int c,p,calificaciones,a = 0;
void main()
{

  a=1;


	for(int i = 1; i<=5;i++)
   {
     
         cout<<"Alumno "<<i<<endl;
         cout<<"Ingresa tu calificacion de la unidad "<<a<<endl;
         cin>>c;

         while(c<0 || c>100){
          cout<<"calificacion incorrecta ingrese calificacion de 0-100 "<<endl;
           cout<<"Ingresa tu calificacion de la unidad "<<a<<endl;
           cin>>c;
         }//cuple con el rango

         calificaciones = calificaciones + c;
   
             system("cls");
              p = calificaciones/3;
            if(p > 70)
           {
             cout<<"Aprovado "<<"promedio"<<p<<endl;
           }else{
             cout<<"Reprobado "<<"promedio"<<p<<endl;
          }
          p,calificaciones = 0;
           system("pause");
           system("cls");
   	      a++;
   }
	getch();
}
