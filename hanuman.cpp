#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string m="got hanuman lead uva";
    //cin>>m;
    string t=m;
    next_permutation(m.begin(),m.end());
    while(t!=m)
    {
        //if(m[0]=='m')
        cout<<m<<endl;
        next_permutation(m.begin(),m.end());
    }
}
