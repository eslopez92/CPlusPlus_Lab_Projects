#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char Part_Number[3];
	double names;
	int Price,Quantity,Amount;

ifstream firstfile("datafinal.dat");

if(firstfile.fail())
{
	cout<<"error!"<<endl;
}

while(!firstfile.eof())
{
		firstfile>>Part_Number>>Price>>Quantity>>names;
		Amount=Quantity*Price;

		cout<<"Number: "<<Part_Number<<"\tPrice: $"<<Price<<"\tQuantity: "<<Quantity<<"\tAmount: $"<<Amount<<endl<<endl<<"names: "<<names<<endl<<endl;
}

cout<<"Copy complete."<<endl;
firstfile.close();


system ("pause");
return 0;
}