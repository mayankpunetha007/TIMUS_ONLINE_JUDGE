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
 struct a
 {
     int pos;
     int val;
 }
 a A[1001];
 bool cmp(a aa,a bb)
 {
     return aa.val<bb.val;
 }
int main()
{
    int n;
    cin>>n;
    int k=0;
    while(k!=n){
        cin>>A[k].val;
        A[k].pos=k+1;
        k++;
    }
    sort(A,A+k,cmp);
    for(int i=0;i<k;i++)
    {
        int count=0;
        set<int> m;
        for(int j=0;j<k;j++)
        {
            if(A[j].val<=A[i].val)
                    m.insert(A[j].pos);
            if(m.size())
        }
    }
    return 0;
}

