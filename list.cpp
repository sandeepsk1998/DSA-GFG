#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst)
{
	list<int> :: iterator it;
	for(it=lst.begin();it!=lst.end();it++)
	{
		cout<<*it <<" ";
	
	}
		cout<<endl;
}
int main()
{
	list<int > list1;
	// list<int > list2(7);
	list1.push_back(4);
		list1.push_back(6);
			list1.push_back(8);
				list1.push_back(10);
				list1.pop_front();
	     		display(list1);
	     		list<int>list2(3);
	     		list<int> :: iterator iter;
	     		iter=list2.begin();
	     		*iter=100;
	     		iter++;
	     		*iter=6;
	     		iter++;
	     		*iter=9;iter++;
	     		display(list2);
	     		return 0;
}
