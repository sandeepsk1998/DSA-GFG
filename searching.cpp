#include<iostream>
using namespace std;
int LinearSearch(int a[5] ,int x)
{
	int i;
	if(a[i]==x)
cout<<"found";
}
int main()
{
	int a[10],x;
	cout<<"enter the array";
	for(int i=0;i<5;i++)
{
	cin>>a[i];
	
}
cout<<"enter the number you want to search";
cin>>x;
int t=LinearSearch(a,x);
cout<<"found";
return 0;
}
