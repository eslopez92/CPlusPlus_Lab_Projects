#include <iostream>
#include <ctime>
using namespace std;

int main()
{	
	srand(time(NULL));
	int a[20];
	int *ptr;
	ptr=a;
	int x=rand()%20;
	int num2=0;
	int num1=0;
	int z=0;
	int g=0;

	cout<<"Please input a number between -50 and 50 : "<<endl;

	int num3;
	cin>>num3;	
	cout<<"---------------------------"<<endl;
	for (int i=0; i<20; i++)
	{ 	
	num1 = rand()%101-50;
	a[i]=num1;
	if (num1==num3)
	{		
		g=*(ptr+i);
		z=i;
		cout<<"a["<<i<<"] = "<<num1<<endl;
		
}
	else


	cout<<"a["<<i<<"] = "<<num1<<endl;
	}

	if (g==0)
		cout<<"---------------------------"<<endl<<"No random numbers match with your input"<<endl;
	else
		cout<<"---------------------------"<<endl<<"The random number that is the same as yours is: "<<endl<<"a["<<
		z<<"] = "<<g<<endl;
	


system ("pause");
return 0;
}