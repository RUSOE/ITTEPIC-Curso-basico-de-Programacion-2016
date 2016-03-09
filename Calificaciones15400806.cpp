/*
   Tomar 5 calificaciones y arrojar si esta aprobado o no

    Hecho por Alfredo Aguiar Arce
    Intituto Tecnologico de Tepic
*/
#include <iostream>

using namespace std;

    void proceso();
    //variables
    int n,promedio,suma,c;
    

int main() {
	
	c=1;
	suma=0;
    proceso();	
    
    while(c<=4)
	{

    	proceso();	
    
			while(n<0 || n>100)
			{
			    cout<<"Calificacion incorrecta"<<endl;
			    proceso();	
			}
			c++;
			 
			suma = suma + n;
				
				
	}
	
	promedio = suma / 5;
	
	if(promedio>70){
		cout<<"Aprovado promedio: "<<promedio<<endl;
	}else{
		cout<<"NO Aprovado: "<<promedio<<endl;
	}

			
    return 0;
}

void proceso()
{
	cout<<"Indica una calificacion que este en el rango de 0 100"<<endl;
    cin>>n;		
}
