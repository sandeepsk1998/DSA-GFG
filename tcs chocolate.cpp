#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,j=0;
	int a[n]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[j];
		if(a[j]!=0)
		j++;
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		
	}
}
