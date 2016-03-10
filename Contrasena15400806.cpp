/*
	Alfredo Aguiar Arce
	Instituto tecnologico de Tepic
	10/marzo/2016
*/

#include <iostream.h>
#include <conio.h>
#include <math.h>

//Variables del radio y area del circlulo
float r,ac;
//Valores enteros nip y contador de maximo de intentos
int nip,i;
//opcion para continuar el ciclo
char opcion;

void main(){
	//inicializar la variable
	i=1;

	cout<<"Cual es la contrasena para continuar"<<endl;
	cin>>nip;

	while(i<=2){
		while(nip == 12){
			do
			{
				/* code */
				cout<<"Radio"<<endl;
				cin>>r;
				ac=(3.14)*(pow(r,2));
				cout<<"El area del circulo es : "<<ac<<" con un radio de "<<r<<endl;
				cout<<"Desea otro calculo 'S' si , 'N' no"<<endl;
				cin>>opcion;
				//system("cls"); 77 en dev c++
				clrscr();
			} while (opcion=='S');//SIGUE REALIZANDO CALCULOS AUN NO SE SALE DEL CICLO

			i=1;
			cout<<"Ha salido del programa ingrese contraseña para continuar"<<endl;
			cin>>nip;

		}//NIP CORRECTO EL PROGRAMA CORRE
		cout<<"Contrasena incorrecta"<<endl;
		cout<<"Cual es la contrasena para continuar"<<endl;
		cin>>nip;
		i++;
	}//MAXIMO DE CONTRASEÑAS 

	cout<<"Has alcanzado el numero maximo de intentos"<<endl;

   getch();
}