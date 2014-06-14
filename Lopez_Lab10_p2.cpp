// Emilio Lopez
// Lab 10 part 2
// 4/18/2012

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
string line;
ifstream ifstr("employee.dat");
ofstream ofstr("employee_number.bak");
int num1=1;

if(ifstr.fail())
{
	cout<<"error!"<<endl;
}

while(!ifstr.eof())
{
		getline(ifstr, line);
		ofstr<<num1<<"\t"<<line<<endl;
		num1++;
}



ifstr.close();
cout<<"Numbering Complete"<<endl;





system ("pause");
return 0;
}