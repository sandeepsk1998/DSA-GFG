#include<iostream>
using namespace std;
int main()
{
	int n,div;
	cout<<"enter the number";
	cin>>n;
	int sum=0;

		for(int i=1;i<n;i++)
		{
			 div=n%i;
			if(div==0)
			sum+=i;
        }
		
	if(n==sum)
	{
		cout<<"number is perfect";
	}
	else
		cout<<"number is not perfect";
		return 0;
}
