#include<iostream>
using namespace std;
int main()
{
	int n,div;
	cout<<"enter the number";
	cin>>n;
	int sum=0;
int temp=n;
		for(int i=1;i<n;i++)
		{
			 div=n%i;
			if(div==0)
			sum+=i;
        }
		
	if(sum>temp)
	{
		cout<<"number is abundant";
	}
	else
		cout<<"number is not abundant";
		return 0;
}
