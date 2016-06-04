#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
long long A[501][501];
long long dp(int prev,int n)
{
    if(n==0)
        return 1;
    else if(n<0)
        return 0;
    if(prev>=n)
        return 0;
    if(A[prev][n]!=-1)
        return A[prev][n];
    long long result=0;
    for(int i=prev+1;i<=n;i++){
            A[i][n-i]=dp(i,n-i);
            result+=A[i][n-i];
    }
    A[prev][n]=result;
    return result;
}
int main()
{
    int N;
    scanf("%d",&N);
    memset(A,-1,sizeof(A));
    long long ans=dp(0,N);
    printf("%lld\n",ans-1);
}
