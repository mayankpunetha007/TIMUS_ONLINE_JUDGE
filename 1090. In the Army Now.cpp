#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int A[10006];
void update(int x)
{
    while(x<10001)
    {
        A[x]++;
        x+=(x&-x);
    }
}
int querry(int x)
{
    int s=0;
    while(x>1)
    {
        s+=A[x];
        x-=(x&-x);
    }
    return s;
}
int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    int globalmax=100000000,pos=-1,j=1;
    while(K--)
    {
        memset(A,0,sizeof(A));
        int f=N;
        int localmax=0;
        while(f--)
        {
            int a;
            scanf("%d",&a);
            localmax+=querry(a);
            update(a);
        }
        //cout<<localmax<<endl;
        if(localmax<globalmax)
        {
            globalmax=localmax;
            pos=j;
        }
        j++;

    }
    printf("%d\n",pos);
}
