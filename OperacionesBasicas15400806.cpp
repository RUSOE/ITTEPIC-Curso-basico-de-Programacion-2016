/*
Obtener 2 numero y realizar dependiendo de el valor una operacion donde
	1)SUMA
	2)RESTA
	3)MULTIPLICACION
	4)DIVISION
	
Hecho por Alfredo Aguiar Arce
Intituto Tecnologico de Tepic
*/
#include <conio.h>
#include <iostream.h>

void main(){
  	//Declarar la funcion que realiza las operaciones
	int funcion(int a,int b,int operation);
	int n,m,o,result;
	
	cout<<"Indica dos numeros"<<endl;
	cin>>n>>m;//tomamos los 2 numeros en un comando
	cout<<"Que deseas hacer con ellos 1)suma 2)resta 3)multipliacion 4)division"<<endl;
	cin>>o;

   	if(o>0 && 0<=4){//Comprobamos que 'o' este dentro del rango 1-4
   	
   		//Llamamos ala funcion que regresa el valor de la operacion realizada y este es almacenado en la variable result
   		result = funcion(n,m,o);
   		cout<<result<<endl;
   		
   	}else{//no cumplio el rango 1-4
   	
   		cout<<"comando invalido"<<endl;
   	}

   getch();

}


/*
	Esta funcion hace mas facil el hecho de realizar la operacion
	donde 'a' y 'b' son los valores a tratar  'o'indica el numero que indicara que operacion realizar
*/
int funcion(int a,int b,int operation)
{
	int total;//Variable que almacena el valor que regresara
    	switch(operation){
      	case 1:
      		total= a+b;
      		break;
       	case 2:
      	 	total= a-b;
      	 	break;
     	 case 3:
     		total=a*b;
     		break;
      	case 4:
      		total= a/b;
         	break;
  	 }
  	 
	return total;//Valor que regresa la funcion luego de la operacion seleccionada
}


