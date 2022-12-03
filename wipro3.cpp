#include<iostream>
using namespace std;
int main()
{
int n,a[10];
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int sum=0,temp;
for(int i=0;i<n-1;i++)
{
	temp=a[i]-a[i+1];
	if(temp<0)
	temp=-temp;
	sum=sum+temp;
}
cout<<sum;
return 0;
}
