#include <iostream>
#include <cstdio>
#include <cctype>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <sstream>
#include <fstream>
#include <ctime>
#include <cassert>
#include <cstring>
#include <sstream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int sum1=0,sum2=0;
    int s=0;
    while(s!=n)
    {
        s++;
        int a,b;
        cin>>a>>b;
        sum1+=a;
        sum2+=b;
    }
    if( (sum1+k-sum2-(2*(n+1)))<0)
        cout<<"Big Bang!";
    else
        cout<<(sum1+k-sum2-(2*(n+1)));
    return 0;
}

