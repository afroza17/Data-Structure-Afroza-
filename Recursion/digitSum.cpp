#include<iostream>
using namespace std;

int digitSum(int n)
{
    if(n==0)
        return 0;
    return digitSum(n/10)+ n%10;
}
int main()
{
    int n=567;
    int res=digitSum(n);
    cout<<"Digit sum is:"<<res<<endl;
    return 0;
}