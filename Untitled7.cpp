/*#include<iostream>
using namespace std;
int main()
{
	char s[30],length=0;
	cout<<"enter the string";
	gets(s);
	for(int i=0;s[i]!='\0';++i)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
		s[i]=s[i]+32;
      	}
	
	else if (s[i]>='a' && s[i]<='z')
	 {
	 s[i]=s[i]-32;
     }
}
	cout<<"the length is"<<s<<endl;

	return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
	
	char s[30],count=0;
	cout<<"enter the string";
	gets(s);
		for(int j=0;s[j]!='\0';++j)
	{
		if(s[j]=='a'||s[j]=='e'|| s[j]=='i' || s[j]=='o' || s[j]=='u' )
		count++;
	}
	cout<<count;
	return 0;
}

