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
using namespace std;
int A[60001];
int main()
{
    int N;
    scanf("%d",&N);
    memset(A,6,sizeof(A));
    for(int i=0;i*i<=60000;i++)
        A[i*i]=1;
    A[0]=0;
    A[1]=1;
    A[2]=2;
    A[3]=3;
    A[4]=1;
    for(int i=5;i<=60000;i++){
        int mina=A[i-1]+1;
        for(int j=1;j*j<=i;j++){
            if(A[i-j*j]+1<mina)
                mina=A[i-j*j]+1;
        }
        A[i]=min(mina,A[i]);
    }
    if(A[N]>4)
        cout<<4;
    else
        cout<<A[N];
    return 0;
}

