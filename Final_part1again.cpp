#include <iostream>
using namespace std;



void values(double scores[], double& min, double& max, double& avg)
{
	min=scores[0];
	max=scores[0];
	avg=0;
	double total=0;
	double count=0;

	for (int i=0; i<13; i++)
	{
	

		if (max<scores[i])
			{max=scores[i];}
	else if (min>scores[i])
	{min=scores[i];}
		total=total + scores[i];
		count++;
		}
	avg= total/count;
}


int main()
{
	double scores[13]={90, 103, 88, 95, 106, 87, 75, 99, 85, 82, 92, 111, 78};
	double min, max, avg;


	values(scores,min,max,avg);

	cout<<"The minimum is: "<<min<<endl<<"The maximum is: "<<max<<endl<<"The average is: "<<avg<<endl;

	
system ("pause");
return 0;
}