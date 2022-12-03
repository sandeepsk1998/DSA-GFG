#include<iostream>
using namespace std;
int BinarySearch(int a[10],int left,int right ,int x)
{
	while(left<=right)
	{

	int mid;
	mid =left+(right-left)/2;
	if(a[mid]==x)
	{
	return mid;
    }
	else if(a[mid]<x)
	{
	left=mid+1;
    }
	else
	{
	right=mid-1;
	
     }
 }
return -1;
}



int main()
{
	int a[10],x;
	cout<<" enter the array";
	for(int i=0;i<=10;i++)
	{
		cin>>a[i];
	}
		cout<<" enter the number you want to search"<<endl;
		cin>>x;
	int	t=BinarySearch(a,0,9,x);
	cout<<"number found"<<t<<endl;
	
		return 0;
}
