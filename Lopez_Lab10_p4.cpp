// Emilio Lopez
// Lab 10 part 4
// 4/18/2012

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
string line=("hi");
ifstream ifstr("CPPHumor.dat");
ofstream ofstr("CPPHumor_no_empty_lines.bak");



if(ofstr.fail())
{
	cout<<"error!"<<endl;
}


while(!ifstr.eof())
{	
	getline(ifstr, line);
	if(line!="")
	{	ofstr<<line<<endl;}
}


ifstr.close();
ofstr.close();
cout<<"Line Revmoving Complete"<<endl;





system ("pause");
return 0;
}