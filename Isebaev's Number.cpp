#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <map>
using namespace std;
string a[101][3];
int main()
{
    int N;
    scanf("%d",&N);
    map<string,int> value;
    value["Isenbaev"]=0;

    int k=0;
    bool is=0;
    while(k!=N)
    {
        cin>>a[k][0]>>a[k][1]>>a[k][2];
        int min=400000;
        for(int i=0;i<3;i++)
        {
            if(a[k][i]=="Isenbaev")
                is=1;
            if(value.find(a[k][i])!=value.end())
            {
                map<string,int>::iterator it=value.find(a[k][i]);
                if((*it).second<min)
                    min=(*it).second;
            }
        }
        for(int i=0;i<3;i++)
        {
            if(value.find(a[k][i])!=value.end())
            {
                map<string,int>::iterator it=value.find(a[k][i]);
                if((*it).second > min+1)
                    value[a[k][i]]=min+1;
            }
            else
                value[a[k][i]]=min+1;
        }
        k++;

    }
    for(int l=0;l<N;l++)
    for(k=0;k<N;k++)
    {
        //cout<<k<<endl;
        int min=400000;
        for(int i=0;i<3;i++)
        {
            if(value.find(a[k][i])!=value.end())
            {
                map<string,int>::iterator it=value.find(a[k][i]);
                if((*it).second<min)
                    min=(*it).second;
            }
        }
        for(int i=0;i<3;i++)
        {
            if(value.find(a[k][i])!=value.end())
            {
                map<string,int>::iterator it=value.find(a[k][i]);
                if((*it).second > min+1)
                    value[a[k][i]]=min+1;
            }
            else
                value[a[k][i]]=min+1;
        }

    }
    for(map<string,int>::iterator it=value.begin();it!=value.end();it++)
    {
        if(!is && ((*it).first)=="Isenbaev")
            continue;
        cout<<((*it).first)<<" ";
        if(((*it).second)>400000)
            cout<<"undefined"<<endl;
        else
        cout<<((*it).second)<<endl;
    }
}
