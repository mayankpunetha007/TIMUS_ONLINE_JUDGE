#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char> b;
    b.push_back(s[0]);
    for(int i=1;i<s.length();i++)
    {
        char c=b[b.size()-1];
        if(c==s[i])
        {
            b.erase(b.end()-1);
        }
        else
        {
            b.push_back(s[i]);
        }

    }
    string m(b.begin(),b.end());
    cout<<m;
}
