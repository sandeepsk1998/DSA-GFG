#include<iostream>
using namespace std;
int main()
{
long int n;
int k;
int count =0;
cin>>n;
cin>>k;
while(n>0)
{
	
if(k==n%10)
count++;	
	n=n/10;
	
}
cout<<count;
return 0;
}
