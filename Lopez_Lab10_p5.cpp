// Emilio Lopez
// Lab 10 part 5
// 4/18/2012

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>


using namespace std;

int main()
{
string line=("hi");
char ch;
ifstream ifstr("CPPHumor.dat");
ofstream ofstr("CPPHumor_no_spaces.bak");

if(ofstr.fail())
{
	cout<<"error!"<<endl;
}


while(ifstr.good())
{	
	ch= ifstr.get();
	if (ch!=' ')
	{
	ofstr<<ch;
	}
}



ifstr.close();
ofstr.close();
cout<<"Line taking Complete"<<endl;





system ("pause");
return 0;
}