#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"enter size of array";
	cin>>n;
	int a[10];
	cout<<"enter the element"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int temp;
	  for(int i=0;i<n;i++)
	  {
	  	  for(int j=i+1;j<n;j++)
	  	  {
	  	  	if(a[i]>a[j])
	  	  	{
	  	  	temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
				}
	  	  	
			}
	  	
	  }
	  //sorted array
	  	for(int i=0;i<n;i++)


	    cout<<a[i]<<endl;
	    	for(int i=n-1;i>=n/2;i--)


	cout<<a[i]<<endl;

	


    return 0;
}
