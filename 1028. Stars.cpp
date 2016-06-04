#include <cstdio>
#include <iostream>
using namespace std;
int a[300002],level[15002];
void update(int x)
{
    //cout<<x<<endl;
    if(x<32002)
        a[x]++;
    else
        return;
    x+=(x&-x);
    update(x);

}
int sum(int x)
{
    int s=0;
    while(x>0)
    {
        s+=a[x];
        x-=(x&-x);
    }
    return s;
}
int main()
{
    int t,k;
    scanf("%d",&t);
    k=t;
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        x++;
        level[sum(x)]++;
        update(x);
    }
    for(int i=0;i<k;i++)
        printf("%d\n",level[i]);
}
