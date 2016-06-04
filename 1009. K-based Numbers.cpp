#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
string add(string a,string b)
{
    int i=a.length()-1,j=b.length()-1;
    string answer="";
    int sum=0,carry=0;
    for(;i>=0 && j>=0;i--,j--)
    {
        sum=(a[i] + b[j] - '0' -'0' +carry);
        //cout<<a[i]<<" "<<b[i]<<endl;
        answer+=(char)(sum%10 + '0'  );
        carry=sum/10;
        sum/=10;
    }
    //cout<<a<<" + "<<b<<" = "<<answer<<endl;
    while(i>=0)
    {
        sum=(a[i]+carry-'0');
        answer+=(sum%10+'0');
        carry=sum/10;
        sum/=10;
        i--;
    }
    while(sum>0)
    {
        answer+=(sum%10+'0');
        carry=sum/10;
        sum/=10;
    }
    reverse(answer.begin(),answer.end());
    return answer;
}
string multiply(string a,string b)
{
    int carry=0;
    string answer="";
    for(int i=a.length()-1;i>=0;i--)
    {
        carry+=((a[i]-'0')*(b[0]-'0'));
        answer+=(carry%10+'0');
        carry/=10;
    }
    while(carry)
    {
        answer+=(carry%10+'0');
        carry/=10;
    }
    reverse(answer.begin(),answer.end());
    return answer;
}
int main()
{

   cout<<add("32324234","4845454");
   int N,K;
   scanf("%d %d",&N,&K);
   char A[10];
   sprintf(A,"%d",K-1);
   string m(A);
   //cout<<m<<endl;
   string p0="0",po="1",pr0="",pro="";
   for(int i=1;i<N;i++)
   {
       pr0=multiply(po,m);
       //cout<<po<<" "<<m<<endl;
       pro=add(pr0,p0);
       p0=pr0;
       po=pro;
       //cout<<p0<<" "<<po<<endl;
   }
    string answer=multiply(pro,m);
    answer=add(answer,pr0);
    cout<<answer<<endl;
    return 0;
}
