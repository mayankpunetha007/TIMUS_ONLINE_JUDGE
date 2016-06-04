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
long long A[10][82];
int main()
{
    int S;
    scanf("%d",&S);
    memset(A,0,sizeof(A));
    for(int i=0;i<=9;i++)
        A[1][i]=1;
    for(int i=1;i<=8;i++)
    {
        //A[i+1][0]=A[i][0]+1;
        for(int j=0;j<=9;j++)
            for(int k=0;k<=9*(i+1);k++)
                if(k+j<=81)
                    A[i+1][k+j]+=A[i][k];
        //cout<<i<<" "<<A[i][0]<<" "<<A[i+1][1]<<endl;
    }
    if(S==1)
        cout<<A[9][S]+1;
    else
        cout<<A[9][S];
	return 0;
}

