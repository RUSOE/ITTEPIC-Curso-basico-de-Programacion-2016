/*
"Obtener un dia de la semana en base a su posicion usando SWITCH()"
Hecho por Alfredo Aguiar Arce
Ingenieria en Mecatronica
Intituto tecnologico de tepic
*/
#include <conio.h>
#include <iostream.h>

void main(){
	int n;//Variable a comparar
	
	cout<<"Indica un dia de la semana"<<endl;
	cin>>n;
	
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
      		case default:
      			cout<<"Dia invalido"<<endl;
      			break
      }
   
   getch();
}


