#include <vector>
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    vector<long long> primes;
    primes.push_back(2);
    primes.push_back(3);
    for(int i=5;i<=200000;i+=2)
    {
        int mas=sqrt(i/1.0)+1;
        bool isprime=1;
        for(int j=0;primes[j]<mas;j++)
        {
            if(i%primes[j]==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime)
            primes.push_back(i);
    }
    //cout<<primes.size()<<endl;
    while(t--)
    {
        int m;
        scanf("%d",&m);
        printf("%d\n",primes[m-1]);

    }
}
