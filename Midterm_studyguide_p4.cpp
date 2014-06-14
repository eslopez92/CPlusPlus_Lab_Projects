#include <iostream>
#include <ctime>
using namespace std;
int main()
{		srand(time(NULL));
		int a[10];
		int i;
		int tot=0;
	for (i=0;i<10;i++)
	{	

		a[i]=rand()%100;
			cout<<"A["<<i<<"] = "<<a[i]<<endl;
	}
	cout<<endl<<"The list of even elements are:"<<endl;
for (int i=0;i<10;i++)
{

	if (a[i]%2==0)
	{
		cout<<"A["<<i<<"] = "<<a[i]<<endl;
		tot++;

	}
	}
cout<<endl<<"The total number of even elements is: "<<tot<<endl;

	system("pause");
	return 0;
}