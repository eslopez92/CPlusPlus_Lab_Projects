// Emilio Lopez
// Lab 10 part 3
// 4/18/2012

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
string line=("anything");
ofstream ofstr("text.dat");


if(ofstr.fail())
{
	cout<<"error!"<<endl;
}
getline(cin, line);
while(line!="")
{
	ofstr<<line<<endl;
		getline(cin, line);
		
}



ofstr.close();
cout<<"Converting Complete"<<endl;





system ("pause");
return 0;
}