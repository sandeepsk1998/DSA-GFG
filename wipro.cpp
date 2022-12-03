#include<iostream>
using namespace std;
int main()
{
long int n;
int rem;
int a[10]={0};
cin>>n;
while(n)
{
	rem=n%10;
	a[rem]++;
	n=n/10;
}
int i,sk=0;
for(i=0;i<10;i++)
{
	if(a[i]>1)
	{
		sk++;
	}
}
if(sk==0)
sk=-1;
cout<<sk;
return 0;
}
