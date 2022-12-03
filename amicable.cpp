#include<iostream>
using namespace std;
void amicable(int x,int y)
{
	int temp1=x,temp2=y;
	int sum1=0,sum2=0;

		for(int i=1;i<x;i++)
		{
			int  div1=x%i;
			if(div1==0)
			sum1+=i;
        }
        	for(int i=1;i<y;i++)
		{
			 int div2=y%i;
			if(div2==0)
			sum2+=i;
        }
        if(sum1==temp2 && sum2==temp1)
        {
        	cout<<"number is friendly";
		}
}
int main()
{
	int x,y;
	cout<<"enter the 1st number";
	cin>>x;	
	cout<<"enter the 2nd number";
	cin>>y;
	amicable(x,y);

		return 0;
}
