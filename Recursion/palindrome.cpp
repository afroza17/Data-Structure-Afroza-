#include<iostream>
#include<string>
using namespace std;

bool isPal(string &str,int start,int end)
{
    if(start>=end)
        return true;
    return(str[start]==str[end] && isPal(str,start+1,end-1));

}
int main()
{
    string str="abcdefaddba";
    
    bool res=isPal(str,0,str.length()-1);
    if(res)
        cout<<"YES!!! Palindrome"<<endl;
    else
        cout<<"NO :("<<endl;
    return 0;
}