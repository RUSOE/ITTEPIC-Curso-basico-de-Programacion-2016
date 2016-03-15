/*
	Alfredo Aguiar Arce
	Instituto Tecnologico de Tepic
	
	Cuenta de 10 en 10
*/
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a,sq,c;
int main(int argc, char** argv) {
	
	a =10;
	for(int i = 0;i<=50;i++)
	{
		sq = pow(i,2);
		c = pow(i,3);
		
		cout<<i<<" "<<sq<<" "<<c<<endl;
		if(i == a && a<=50)
		{
			system("pause");
			cout<<"Presiona una tecla para continuar "<<endl;
			a = a + 10;	
			system("cls");	
		}
	}
	return 0;
}
