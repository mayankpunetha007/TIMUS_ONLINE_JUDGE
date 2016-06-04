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
int a[70001];
vector<int> tree[70001*4];
void create(int pos,int low,int high){
    int mid=(low+high)/2;
    if(low==high){
        tree[pos].push_back(a[low]);
        return;
    }
    create(2*pos,low,mid);
    create(2*pos+1,mid+1,high);
    for(int i=0;i<tree[2*pos].size();i++){
        tree[pos].push_back(tree[2*pos][i]);
    }
    for(int i=0;i<tree[2*pos+1].size();i++){
        tree[pos].push_back(tree[2*pos+1][i]);
    }
    sort(tree[pos].begin(),tree[pos].end());
}
int querry(int pos,int ll,int lr,int low,int high,int x){
    if(low>high || ll>lr)
        return 0;
    int mid=(ll+lr)/2;
    if(ll==low && lr==high )
        return (binary_search(tree[pos].begin(),tree[pos].end(),x));
    else if(high<=mid)
        return querry(2*pos,ll,mid,low,high,x);
    else if(low>mid)
        return querry(2*pos+1,mid+1,lr,low,high,x);
    else
        return (querry(2*pos,ll,mid,low,mid,x) || querry(2*pos+1,mid+1,lr,mid+1,high,x));
    return 0;
}
int main()
{
    register int t,k=0;
    scanf("%d",&t);
    while(k!=t){
        scanf("%d",&a[k]);
        k++;
    }
    create(1,0,t-1);
    register int q,a,b,x;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d",&a,&b,&x);
        printf("%d",querry(1,0,t-1,a-1,b-1,x));
    }
	return 0;
}
