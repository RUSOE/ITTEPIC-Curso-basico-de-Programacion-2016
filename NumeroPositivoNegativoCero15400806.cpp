/*
"Verificar si un numero es positivo negativo o cero"
Hecho Por Alfredo Aguiar Arce
Instituto Tecnologico de tepic
*/
#include <conio.h>
#include <iostream.h>

void main(){
	int n;
   
   	cout<<"Indica un numero"<<endl;
   	cin>>n;

	 if(n==0)
	 {
	 	cout<<"El numero es cero"<<endl;
	 }else if(n>0)
	 {
	 	cout<<"El numero es positivo"<<endl;
	 }else if(n<0){
	 	cout<<"El numero es negativo"<<endl;
	 }

   getch();

}
