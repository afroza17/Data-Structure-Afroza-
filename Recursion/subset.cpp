#include<iostream>
#include<string>
using namespace std;

void subset(string &s,string &res,int len)
{
    if(len==s.length())
    {
        cout<<res<<endl;
        return;
    }
    subset(s,res,len+1);
    string stemp=res+s[len];
    subset(s,stemp,len+1);
}
int main()
{
    string s="ABC";
    string s1="";
    subset(s,s1,0);
    return 0;
}