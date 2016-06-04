#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int k=0;
    int a,m;
    int max=0;
    vector< vector< pair<int,int> > > als(101);
    while(k!=t)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        pair<int,int> ins(a,b);
        als[b].push_back(ins);
        k++;
        if(b>max)
            max=b;
    }
    for(int i=max;i>=0;i--)
    {
        for(int j=0;j<als[i].size();j++)
        {
            printf("%d %d\n",als[i][j].first,als[i][j].second);
        }
    }
}
