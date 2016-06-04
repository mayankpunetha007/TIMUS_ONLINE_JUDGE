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
    set<string> values;
    set<string> data[100];
    map<string,int> answer;
    int k=0;
    while(t--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        values.insert(a);
        values.insert(b);
        values.insert(c);
        data[k].insert(a);
        data[k].insert(b);
        data[k].insert(c);
        k++;
    }
    queue<string> pn;
    queue<int> dist;
    pn.push("Isenbaev");
	dist.push(0);
	while(!pn.empty())
	{

	    string prname=pn.front();
	    pn.pop();
	    int distance=dist.front();
	    dist.pop();
        if(answer.find(prname)!=answer.end())
            continue;
       // cout<<prname<<" "<<distance<<endl;
        for(int i=0;i<k;i++){
            if(data[i].find(prname)!=data[i].end()){
                for(set<string>::iterator j=data[i].begin();j!=data[i].end();j++){
                    pn.push(*j);
                    dist.push(distance+1);
                }
            }
        }
        answer[prname]=distance;
	}
	//cout<<"YO";
	for(set<string>::iterator it=values.begin();it!=values.end();it++){
        if(answer.find(*it)==answer.end()){
            cout<<*it<<" "<<"undefined"<<endl;
        }
        else{
            cout<<(*it)<<" "<<answer[*it]<<endl;
        }
	}
	return 0;
}

