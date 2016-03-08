/*
Obtener 2 numero y realizar dependiendo de la letra
	S)SUMA
	R)RESTA
	M)MULTIPLICACION
	D)DIVISION
	
Hecho por Alfredo Aguiar Arce
Intituto Tecnologico de Tepic
*/
#include <conio.h>
#include <iostream.h>
#include <ctype.h>

void main(){

  //nota* los valores nulos son aproposito para mejor facilidad de su manejo deacuerdo a su orden
  char *Operadores[] = {NULL,NULL,NULL,NULL,NULL,NULL,NULL,"Suma", "Resta", "Multiplicacion", "Division" };
  	//Declarar la funcion que realiza las operaciones
	void funcion(int a,int b,char operation);
   //variables
	int n,m,result;
  char letra;

	cout<<"Primer numero"<<endl;
	cin>>n;
  cout<<"Segundo numero"<<endl;
  cin>>m;

  clrscr();

    for(int i = 5;i<11;i++)
    {
      gotoxy(20,i);
      cout<<Operadores[i]<<endl;
    }
	
	cin>>letra;
  funcion(n,m,letra);

   getch();

}


/*
	Esta funcion hace mas facil el hecho de realizar la operacion
	donde 'a' y 'b' son los valores a tratar  'letra'indica el numero que indicara que operacion realizar
*/
void funcion(int a,int b,char operation)
{
	int total;//Variable que almacena el valor que regresara
    	switch(operation){
      	case 'S':
          	total= a+b;
            cout<<"la suma de "<<a<<" + "<<b<<" es = "<<total<<endl;
      		break;
       	case 'R':
          total= a-b;
          cout<<"la esta de "<<a<<" - "<<b<<" es = "<<total<<endl;
      	 	break;
     	 case 'M':
        total=a*b;
        cout<<"la multiplicacion de "<<a<<" x "<<b<<" es = "<<total<<endl;
     		break;
      	case 'D':
          total= a/b;
          cout<<"la division de "<<a<<" / "<<b<<" es = "<<total<<endl;
         	break;
  	 }
}


