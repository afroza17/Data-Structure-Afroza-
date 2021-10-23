#include<iostream>
using namespace std;
int maxVal(int a,int b,int c)
{
    int temp=a>=b?a:b;
    int res=temp>=c?temp:c;
    return res;
}
int maxPiece(int n,int a,int b,int c)
{
    int res;
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    res=maxVal(maxPiece(n-a,a,b,c),
            maxPiece(n-b,a,b,c),
            maxPiece(n-c,a,b,c));
    if(res==-1)
        return -1;
    return res+1;
}
int main()
{
    int n=5;
    int a=2,b=5,c=1;
    int res=maxPiece(n,a,b,c);
    cout<<"Max possible pieces:"<<res<<endl;
    return 0;
}