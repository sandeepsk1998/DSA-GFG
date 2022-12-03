#include<iostream>

using namespace std;
int main()
{
	
	char s[30],temp[30],count=0;
	int j;
	cout<<"enter the string"<<endl;
	gets(s);
		for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u' )
	
		for( j=i;s[i]!='\0';j++)
		{
		temp[j]=s[i];
		}

	}

	cout<<temp[j];
	return 0;
}