#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter the number";
	cin>>x;
	int temp=x;
	int sum=0;
    while(x)
    {
       int r=x%10;
       sum=sum+r;
       x=x/10;
    }
     y=temp/sum;
	if(temp%sum==0)
	{
			cout<<y<<"number is harshad";
	}
	else
		cout<<"number is automorphic";
		return 0;
}
