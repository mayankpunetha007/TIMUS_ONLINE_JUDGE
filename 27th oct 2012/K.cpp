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
#include <sstream>
using namespace std;
vector< vector<pair<int,int> > > edges1(10001);
vector< vector<pair<int,int> > > edges2(10001);
const int INF = 1000000000 ;
vector < int > d1 (10001, INF ) ,d2(10001,INF) , p ( 10001,0 ) ;
int main()
{
    int n,m,s,dest;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        edges1[a].push_back(make_pair(b,1));
        edges1[b].push_back(make_pair(a,0));
        edges2[a].push_back(make_pair(b,0));
        edges2[b].push_back(make_pair(a,1));
    }
    cin>>s>>dest;
    if(s==dest)
    {
        cout<<0;
        return 0;
    }
	d1 [ s ] = 0 ;
	set < pair < int , int > > q ;
	q. insert ( make_pair ( d1 [ s ] , s ) ) ;
	while ( ! q. empty ( ) ) {
		int v = q. begin ( ) -> second ;
		q. erase ( q. begin ( ) ) ;

		for ( long long j = 0 ; j < edges1 [ v ] . size ( ) ; ++ j ) {
			int to = edges1 [ v ] [ j ] . first ,
				len = edges1 [ v ] [ j ] . second ;
			if ( d1 [ v ] + len < d1 [ to ] ) {
				q. erase ( make_pair ( d1 [ to ] , to ) ) ;
				d1 [ to ] = d1 [ v ] + len ;
				p [ to ] = v ;
				q. insert ( make_pair ( d1 [ to ] , to ) ) ;
			}
		}
	}
	d2 [ s ] = 0 ;
	q.clear();
	q. insert ( make_pair ( d2 [ s ] , s ) ) ;
	while ( ! q. empty ( ) ) {
		int v = q. begin ( ) -> second ;
		q. erase ( q. begin ( ) ) ;
		for ( long long  j = 0 ; j < edges2 [ v ] . size ( ) ; ++ j ) {
			int to = edges2 [ v ] [ j ] . first ,
				len = edges2 [ v ] [ j ] . second ;
			if ( d2 [ v ] + len < d2 [ to ] ) {
				q. erase ( make_pair ( d2 [ to ] , to ) ) ;
				d2 [ to ] = d2 [ v ] + len ;
				p [ to ] = v ;
				q. insert ( make_pair ( d2 [ to ] , to ) ) ;
			}
		}
	}
    cout<<min(d1[dest],d2[dest]);
}

