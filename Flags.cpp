#include <cstdio>
using namespace std;
int N;
long long A[45];
int main()
{
    int N;
    scanf("%d",&N);
    A[0]=0;
    A[1]=1;
    for(int i=2;i<=N;i++)
        A[i]=A[i-1]+A[i-2];
    //if(N&1)
        printf("%lld\n",2*A[N]);
    //else
        //cout<<A[N][0]+A[N][1]<<endl;
}
