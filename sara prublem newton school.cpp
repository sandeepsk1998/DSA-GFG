#include<iostream>
using namespace std;

void add(int n)
{
	int i,j,count=0;
	for( i=1;i<n;i++)
	
		for(j=1;j<n;j++)
		
			if((i+j)==n && (i<j) &&(i!=j))
		
		count++;
		

	cout<<count;
}
int main()
{
	int n;
	cin>>n;
	add(n);
	return 0;
}

