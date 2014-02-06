# include <iostream>
# include <stdio.h>
# include <algorithm>
# include <queue>
# include <set>
# include <string.h>
# include <vector>
# include <fstream>
# include <math.h>
# include <sstream>
# include <stack>

# define for1(i,k,n)              for(long long i=k;i<n;i++)
# define for2(i,k,n)              for(long long i=k;i<=n;i++)
# define Min(x,y)                   ((x)<(y)?(x):(y))
# define Max(x,y)                   ((x)>(y)?(x):(y))
# define INF (long long int ) 1E9
# define ALL(x)                  (begin(x),end(x))
# define Abs(x)                 (x>=0?x:-x)

using namespace std;
typedef long long int ll;










  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
 #endif
    std::ios_base::sync_with_stdio (false);

    ll i,j,k,x,y,l,n,m,t,sum1,a,b;
    cin>>t;
    for2(t1,1,t)

{cin>>n>>m;
	++n;
vector < vector <ll> > g(n);
vector < vector <ll> > w(n);
for1(i,0,m)
{
	cin>>x>>y>>j;
	g[x].push_back(y);
	g[y].push_back(x);
	w[x].push_back(j);
	w[y].push_back(j);
}
a=1;b=n-1;
vector <ll> distance(n,INF);
vector < pair<ll,ll> > v;
set < pair<ll,ll> > s;
for1(i,1,n)
{
	s.insert(make_pair(INF,i));
}



s.insert(make_pair(0,a));
distance[a]=0;
while(!s.empty())
{
	ll node=(*s.begin()).second;
	ll dis=(*s.begin()).first;
	
	s.erase(s.begin());
	
	for1(i,0,g[node].size())
	{
		x=g[node][i];
		//cout<<x<<" "<<distance[x]<<" "<<distance[node]<<" "<<w[node][i]<<endl; 
		if (distance[x]>distance[node]+w[node][i])
		{
			s.erase(s.find(make_pair(distance[x],x)));
			distance[x]=distance[node]+w[node][i];

			s.insert(make_pair(distance[x],x));
		}
	}
}
if (distance[b]<INF)  
cout<<"Case"<<" "<<t1<<":"<<" "<<distance[b]<<endl;
else
cout<<"Case"<<" "<<t1<<":"<<" "<<"Impossible"<<endl;
}
return 0;
}