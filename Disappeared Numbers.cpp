#include<bits/stdc++.h>
using namespace std;
vector <int>findDisappearedNumbers(vector<int>&a)
{
    unordered_set <int> mark;
    for(int &i:a)
    mark.insert(i);
    int N=a.size();
    vector<int>result;
    for(int i = 1 ; i<=N ; i++)
    if(mark.find(i)==mark.end())
    result.emplace_back(i);
    return result;
}
int main()
{
    vector<int>a={4,3,2,7,8,2,3,1};
    vector<int>result=findDisappearedNumbers(a);
    if(result.empty())
    cout<<"No disappeared element\n";
    else for(int &i:result)
    cout<<i<<" ";
    return 0;
}