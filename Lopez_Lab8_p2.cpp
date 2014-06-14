#include <iostream>
using namespace std;

void extend(double p[10],double q[10],double a[10])
{
	double *ptrp, *ptrq,* ptra;
	ptrp=p;
	ptrq=q;
	ptra=a;
	for (int i=0;i<10;i++)
	{
		*(ptra+i)=*(ptrp+i) * *(ptrq+i);

	}

}
int main()
{	
	double price[10]=
	{10.64,14.89,15.21,77.21,23.8,61.26,92.37,12.73,2.99,58.98};
	double quantity[10]=
	{4,8,17,2,94,65,20,78,55,41};
	double amount [10];

	extend(price,quantity,amount);

	for (int i=0;i<10;i++)
	{
	cout<<"amount["<<i<<"] = "<<amount[i]<<endl;
	}


system ("pause");
return 0;
}