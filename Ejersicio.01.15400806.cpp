#include <iostream.h>
#include <conio.h>

int n,sq,c,i;
void main()
{
	cout<<"Introduce un numero"<<endl;
   cin>>n;

   while(i<=n)
   {
   		sq = i* i;
   		c= sq * i;
   		cout<<i<<" "<<sq<<" "<<c<<endl;
      	i++;
   }

   getch();
}