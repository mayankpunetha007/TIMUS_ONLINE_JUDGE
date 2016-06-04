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
int pow(int a, int b, int MOD) {
int x = 1, y = a;
	while(b > 0) {
		if(b%2 == 1) {
			x=(x*y)%MOD;
		}
		y = (y*y)%MOD;
		b /= 2;
	}
	return x;
}

int modInverse(int a, int m) {
    int a1=a,a2=0,b1=0,b2=m,c1=a,c2=m,a3,b3,c3;
    int c=c2/c1;
    while(c1!=1)
    {
        c=c2/c1;
        //cout<<c2<<endl;
        a3=a1;
        b3=b1;
        c3=c1;
        a1=a2-c*a1;
        b1=b2-c*b1;
        c1=c2-c*c1;
        a2=a3;
        b2=b3;
        c2=c3;
    }
    return (a1/a +m)%m;
}
int totient(int n)
{
    int result=n;
    for(int i=2;i*i<=n;++i)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n/=i;

            result-=result/i;
        }
    }
    if(n>1)
    {
        result-=result/n;
    }
    return result;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int e,n,c;
        scanf("%d %d %d",&e,&n,&c);
        int phi=totient(n);
        //cout<<phi<<endl;
        int d=modInverse(e,phi);
        //cout<<d<<endl;
       printf("%d\n",pow(c,d,n));
    }

	return 0;
}

