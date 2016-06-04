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
long long A[10001][7];
long long sum(long long run,long long balls)
{
     if(run<=0 || balls<=0)
            return 0;
    if(run==0 || balls==0)
            A[run][balls]=1;

    if(A[run][balls]!=-1)
        return (A[run][balls])%10000007;
   long long a=(sum(run,balls-1) + 1)%10000007;
   long long b=(sum(run-1,balls-1) + 1)%10000007;
   long long c=(sum(run-2,balls-1) + 1)%10000007;
   long long d=(sum(run-3,balls-1) + 1)%10000007;
   long long e=(sum(run-4,balls-1) + 1)%10000007;
   long long f=(sum(run-6,balls-1) + 1)%10000007;
   long long g=(sum(run-1,balls) + 1)%10000007;
   long long h=(sum(run-2,balls) + 1)%10000007;
   long long i=(sum(run-3,balls)+ 1)%10000007;
   long long j=(sum(run-5,balls)+ 1)%10000007;
   long long k=(sum(run-1,balls)+ 1)%10000007;
   long long l=(sum(run-2,balls)+ 1)%10000007;
   long long m=(sum(run-5,balls)+ 1)%10000007;
   long long n=(sum(run-7,balls)+ 1)%10000007;
      //cout<<a<<" "<<b<<endl;

   A[run][balls]=(a+b+c+d+e+f+g+h+i+j+k+l+m+n)%10000007;
   return A[run][balls];
}
int main()
{
    long long t,k=0;
    scanf("%lld",&t);
    while(k!=t)
    {
            for(long long j=0;j<10001;j++)
                for(long long ka=0;ka<7;ka++)
                    A[j][ka]=-1;
        long long N;
        scanf("%lld",&N);
        long long ans=0;
        cout<<sum(N,6)<<endl;
            //ans=(ans+ sum(wickets,N,6))%10000007;

        k++;
        cout<<ans<<endl;
        //printf("Case %d: %lld\n",k,ans);
    }
	return 0;
}

