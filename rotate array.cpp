#include <iostream>
using namespace std;
void rotate_by_one(int a[], int n)
{
    int temp=a[0];
    for(int i=0;i<n;i++)
    {
        a[i]=a[i+1];
        
    }
    a[n-1]=temp;
}
void left_rotate(int a[],int d,int n)
{
    for(int i=0;i<d;i++)
    rotate_by_one(a,n);
}
void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
int main() 
{
	//code
	
	    int a[10],n,d;
	    cin>>n>>d;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    left_rotate(a,d,n);
	    printArray(a,n);
	    
	
	return 0;
}
