#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stack<char> als;
    als.push(s[0]);
    for(int i=1;i<s.length();i++)
    {
        char m='#';
        if(!als.empty())
        m=als.top();
        if(m==s[i])
        {
            als.pop();
            continue;
        }
        als.push(s[i]);
    }
    string ma="";
    while(!als.empty())
    {
        ma+=als.top();
        als.pop();
    }
    reverse(ma.begin(),ma.end());
    cout<<ma;
}
