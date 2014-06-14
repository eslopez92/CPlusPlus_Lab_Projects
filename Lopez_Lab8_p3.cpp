#include <iostream>
using namespace std;

int main()
{
	string S("Hola world how are you?");
	int count=1;
		for (int i=0;i<S.length(); i++)
		{
			if (S[i]==' ')
				{count ++;}
		}
		cout<<"Hola world how are you?"<<endl;
		cout<<"There are "<<count<<" words in this sentence."<<endl;
	system ("pause");
return 0;
}