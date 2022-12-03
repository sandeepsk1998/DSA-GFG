#include <iostream>  
using namespace std;  
int main()  
{     
    int i, j, k, m;    
    for(i=1;i<=5;i++)    
    {    
        for(j=1;j<=5-i;j++)    
            cout<<" ";  
		int ch=1;	  
        for(k=1;k<=i;k++)    
            cout<<ch++;    
            ch=ch-2;    
        for(m=1;m<i;m++)    
            cout<<ch--;    
        cout<<"\n";    
        ch='A';    
    }    
return 0;  
}  
