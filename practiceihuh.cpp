#include<iostream>
using namespace std;
int main()
{
int n=3,i=3,j=1,k=1;
for(i=n;i>=1;i--)
{
	for(j=1;j<=n-i;j++)
	{
		cout<<" ";
	}
	for(k=1;k<=(2*i-1);k++)
{
	cout<<"*";
}
cout<<endl;
}
		return 0;
}
