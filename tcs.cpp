#include <iostream>
  using namespace std;

int binarySearch(int arr[], int left, int right, int x) 
{
  while(left<=right)
  {
  int 	mid=left+(right-left)/2;
  	if(arr[mid]==x)
  	{
	
  	return mid;
  }
  	else if(arr[mid]<x)
  {
		left=mid+1;
  }
  	else
  	right=mid-1;
  }
  return -1;
}

int main() {
	int x,arr[10],temp;
	cout<<"enter the array in ascending order"<<" ";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
		
	}
	cout<<"enter the number you want to serach";
	cin>>x;
	temp=binarySearch(arr,0,9,x);
	if(temp==-1)
	{
		cout<<"wrong";
		
	}
else

		cout<<"found"<<temp;
		
 

  return 0;
}
