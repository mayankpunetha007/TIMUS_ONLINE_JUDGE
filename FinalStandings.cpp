#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
struct m
{
    long long a,b;
};
bool cmp(m a,m b)
{
    return (a.b>b.b);
}
m aa[150005];
int main()
{
    int t;
    scanf("%d",&t);
    int k=0;
    while(k!=t)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        aa[k].a=a;
        aa[k].b=b;
        k++;
    }
    stable_sort(aa,aa+k,cmp);
    for(int i=0;i<k;i++)
        printf("%lld %lld\n",aa[i].a,aa[i].b);

}
