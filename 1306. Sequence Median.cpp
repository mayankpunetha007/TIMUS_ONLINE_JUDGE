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
int main()
{
    int t;
    scanf("%d",&t);
    int median[]={0,0};
    if(t<=2)
    {
        if(t==1)
        {
            int a;
            scanf("%d",&a)
            printf("%d\n",a);
            return 0;
        }
        if(t==2)
        {
            int a,b;
            scanf("%d %d",&a,&b)
            printf("%f\n",(a+b)/2.0);
            return 0;
        }
    }
        t-=2;
        int f=2;
        scanf("%d %d",&median[0],&median[1]);
    while(t--){
        f++;
        int m;
        scanf("%d",&m)
    }
	return 0;
}

