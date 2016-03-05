#include <conio.h>
#include <iostream.h>
#include <utility>


void main(){
  //Declare the function
	int funcion(int a,int b,int operation);
	int n,m,o,result;



   cout<<"Indica dos numeros"<<endl;
   cin>>n>>m;
   cout<<"Que deseas hacer con ellos 1)suma 2)resta 3)multipliacion 4)division"<<endl;
   cin>>o;

   	if(o>0 && 0<=4){
   		result= funcion(n,m,o);
   		cout<<result<<endl;
   	}else{
   		cout<<"comando invalido"<<endl;
   	}

   getch();

}

int funcion(int a,int b,int operation)
{
	int total;
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
   return total;
}


