// Emilio Lopez
// Lab 10 part 1
// 4/18/2012

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
string line;
ifstream ifstr("employee.dat");
ofstream ofstr("employee.bak");

if(ifstr.fail())
{
	cout<<"error!"<<endl;
}

while(!ifstr.eof())
{
		getline(ifstr, line);

		ofstr<<line<<endl;
}

cout<<"Copy complete."<<endl;
ifstr.close();
ofstr.close();

system ("pause");
return 0;
}