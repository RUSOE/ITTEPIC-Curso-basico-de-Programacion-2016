/*
"Elabora un programa que dependiendo el numero nos regrese un dia de la semana " donde:
	1)Lunes
	2)Martes
	3)Miercoles
	4)Jueves
	5)Viernes
	6)Sabado
	7)Domingo
	
Hecho por Alfredo Aguiar Arce
Ingenieria en mecatronica
Intituto tecnologico de tepic
*/
#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
	//Meter todos los valores en una variable para reutilizarlos en base a su posicion
	//NOTA: el primer valor es NULL para mejor comodidad a la hora de requerir los valores del arreglo
	char *dias[] = {NULL, "Lunes", "Martes", "Miercoles", "Jueves","Viernes","Sabado","Domingo" };
	int d;//variable a comparar
	
	cout<<"Proporciona el dia"<<endl;
	cin>>d;

   	if(d>0 && d<7){//Comprobamos que el valor pertenesca al rango 1-7
   		cout<<dias[d]<<endl;//Imprimimos el valor que pertenezca a esa posicion del arreglo
	}else{
		cout<<"El numero no esta en el rango"<<endl;
      	}

   getch();
}
