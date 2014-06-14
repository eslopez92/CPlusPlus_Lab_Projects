# include <iostream>
using namespace std;

struct Time
{
int hour;
int minute;
int second;
};

void diff(Time t1, Time t2, int& hr, int&min, int& sec)
{
	hr= abs(t2.hour-t1.hour);
	min= abs(t2.minute-t1.minute);
	sec= abs(t2.second-t1.second);

}

int main()
{
	Time t1;
	Time t2;
	int hr=0, min=0, sec=0;
	
	cout<<"Please enter the first hour: ";
	cin>>t1.hour;
	cout<<"Please enter the first minute: ";
	cin>>t1.minute;
	cout<<"Please enter the first second: ";
	cin>>t1.second;
cout<<endl;
	cout<<"Please enter the second hour: ";
	cin>>t2.hour;
	cout<<"Please enter the second minute: ";
	cin>>t2.minute;
	cout<<"Please enter the second second: ";
	cin>>t2.second;

cout<<endl;

	diff(t1,t2,hr,min,sec);
		cout<<"Hour: "<<hr<<endl;
		cout<<"Minute: "<<min<<endl;
		cout<<"Second: "<<sec<<endl;

system("pause");
return 0;
}