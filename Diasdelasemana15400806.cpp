#include <conio.h>
#include <iostream.h>
#include <utility>

void main(){
	int n;


   cout<<"Indica un dia de la semana"<<endl;
   cin>>n;

   if(n>0 && n<7){
   	switch(n){
      case 1:
      cout<<"Lunes"<<endl;
      break;
       case 2:
       cout<<"martes"<<endl;
      break;
      case 3:
      cout<<"miercoles"<<endl;
      break;
      case 4:
      cout<<"jueves"<<endl;
      break;
      case 5:
      cout<<"viernes"<<endl;
      break;
      case 6:
      cout<<"Sabado"<<endl;
      break;
      case 7:
      cout<<"domingo"<<endl;
      break;

      }
   }
    else{
   cout<<"El dia no es valido"<<endl;
   }
   getch();

}


