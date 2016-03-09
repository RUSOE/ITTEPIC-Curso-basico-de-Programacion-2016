#include <iostream.h>
#include <conio.h>

int n,c,s,total;

void main()
{
		c=1;
   	cout<<"Cuantas veces realizara el proceso"<<endl;
   	cin>>n;

   while(c<=n)
	{
		cout<<"Introduce un numero mayor a 100"<<endl;
		cin>>s;

      if(s>100)
      {
      	if(s==300)
				{
				total++;
				}


      }else{
         	cout<<"Introduciste un numero menor a 100"<<endl;
            cout<<"Introduce un numero mayo"<<endl;
				cin>>s;
            if(s==300)
				{
				total++;
				}
      }
      
				c++;

	}


	cout<<"Hay un total de "<<total<<" numeros que son 300"<<endl;
   getch();
}
