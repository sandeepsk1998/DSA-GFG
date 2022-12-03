#include<iostream>
using namespace std;
void prime(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		count++	;
		}
	}
	if(count==2)
	{
		cout<<n<<endl;
	}
}
int main()
{
	int x,y;
	cin>>x>>y;
	for(int i=x;i<=y;i++)
prime(i);
return 0;
}
