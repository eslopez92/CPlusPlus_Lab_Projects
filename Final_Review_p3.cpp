////emilio Lopez...69@yahoo.com
//#include <iostream>
//
//using namespace std;
//
//void shift(int a[],int size,int sh);
//
//int main()
//{
//	const int size=8;
//    int myBits[size]={0,1,2,3,4,5,6,7};
//	int distance;
//
//	for(int i=0;i<size;i++) cout<<myBits[i]<<" ";
//	cout<<endl;
//	cout<<"Enter the distance you want to shift to the left by"<<endl;
//	cin>>distance;
//	shift(myBits,size,distance);
//
//	for(int i=0;i<size;i++) cout<<myBits[i]<<" ";
//	cout<<endl;
//
//    system("pause");
//    return 0;
//}
//
//void shift(int a[],int size,int distance)
//{
//	distance=distance%size;
//
//	int i,temp[16];
//
//	for (i=0;i<size;i++) temp[i]=a[i];
//	for	(i=size;i<2*size;i++) temp[i] = a[i-size];
//	
//	if(distance>0)
//	{	for (i=0;i<size;i++) a[i]=temp[i+distance];	}
//	else
//	{	for (i=0;i<size;i++) a[i]=temp[size+i+distance];}
//	
//}