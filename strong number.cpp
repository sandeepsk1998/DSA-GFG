#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter the number";
	cin>>x;
	int temp=x;
	int sum=0;
	while(x)
	{
		int r=x%10;
		int fact=1;
		for(int i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		x=x/10;
	}
	if(temp==sum)
	{
		cout<<"number is strong";
	}
	else
		cout<<"number is not strong";
		return 0;
}
