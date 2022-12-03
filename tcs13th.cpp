
#include <iostream>

using namespace std;
/*bool present(int a[][3],int target,int r, int c)
{
	 for(int i=0;i<r;i++)
     {
         for(int j=0;j<c;j++)
         {
             if(a[r][c]==target)
             {
             	return 1;
			 }
         }
     }
     
	 return 0;
}
*/
void sum(int a[][3],int r, int c)
{
	int maxi=0;

	 for(int i=0;i<r;i++)
     {
     		int sum=0;
     	
         for(int j=0;j<c;j++)
         {
            sum+=a[i][j];
         }
         if(sum>maxi)
         {
         	maxi=sum;	
		}
 }
 cout<<maxi<<endl;

}

int main()
{
    int a[3][3]={ {1,2,3},
                  {4,5,6},
				  {7,8,9 }};
     
     /*for(int i=0;i<3;i++)
     {
         for(int j=0;j<2;j++)
         {
             cin>>a[j][i];
         }
         
     }*/
     /* for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             cout<<a[i][j]<<" ";
         }
         cout<<endl;
         
     }
     */
     
    /* int target=0;
     if(present(a,target,3,3))
     
     {
     cout<<"yes"<<endl;;
     }
     else
    {
 	cout<<"no"<<endl;
    } */
    sum(a,3,3)
    ;
    return 0;
}
