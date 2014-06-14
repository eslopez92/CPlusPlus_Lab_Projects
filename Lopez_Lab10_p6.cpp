// Emilio Lopez
// Lab 10 part 6
// 4/21/2012

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct  data
{ 
	double number;
	double miles;
	double gallons;
	double milespgallon;
};

int main()
{
	data dt;
	double num[5]={25,36,44,52,68};
	double mi[5]={1450,3240,1769,2360,2115};
	double gal[5]={62,136,67,105,67};
	double mpg[5];

	ofstream ofstr("Car_Report.dat");

if (ofstr.fail())
{
	cout<<"The file could not be opened."<<endl;
}


ofstr<<"Car #"<<"          Miles"<<"          Gallons"<<"          Miles per Gallon"<<endl<<
	"-------------------------------------------------------------------"<<endl<<endl;
double total=0;

	for (int i=0;i<5;i++)
	{
		dt.number=num[i];
		dt.miles=mi[i];
		dt.gallons=gal[i];
		mpg[i]= dt.miles / dt.gallons;
		
		ofstr<<num[i]<<"              "<<mi[i]<<"            "<<gal[i]<<"                "<<mpg[i]<<endl<<endl;
		
		total=total+mpg[i];
}

double avg= total/5;

ofstr<<"                                         Average: "<<avg<<" mpg"<<endl;

ofstr.close();

cout<<"File complete"<<endl;


system ("pause");
return 0;
}