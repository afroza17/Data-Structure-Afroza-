#include<iostream>
#include<vector>
using namespace std;


bool isSubsetSum(int idx,vector<int>&v,int sum)
{
    if(sum==0)
        return true;
    if(idx>=v.size())
        return false;
    bool include=isSubsetSum(idx+1,v,sum-v[idx]);
    bool exclude=isSubsetSum(idx+1,v,sum);
    return include||exclude;
}
int main()
{
    vector<int> v;
    for(int i=1;i<=5;i++)
        v.push_back(i);
    int res=isSubsetSum(0,v,9);
    if(res==1)
        cout<<"SUM present"<<endl;
    else
        cout<<"SUM not present"<<endl;
    return 0;
}