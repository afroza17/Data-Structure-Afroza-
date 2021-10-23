#include<iostream>
using namespace std;

int naturalSum(int n)
{
    if(n==0)
        return 0;
    return n+naturalSum(n-1);
}

int main()
{
    //freopen("inp.txt","r",stdin);
    int res=naturalSum(3);
    cout<<"Result is:"<<res<<endl;
    return 0;
}