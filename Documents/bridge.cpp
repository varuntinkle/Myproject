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

#ifndef ONLINE_JUDGE //  ifndef checks whether this macro is defined earlier or not
#define gc getchar //for local PC
#else
#define gc getchar_unlocked //for online judge environments

#endif
# define for1(i,k,n)              for(long long i=k;i<n;i++)
# define for2(i,k,n)              for(long long i=k;i<=n;i++)
# define Min(x,y)                   ((x)<(y)?(x):(y))
# define Max(x,y)                   ((x)>(y)?(x):(y))
# define INF (long long int ) 1e15
# define ALL(x)                  (begin(x),end(x))
# define Abs(x)                 (x>=0?x:-x)

using namespace std;
typedef long long int ll;

ll read_ll()
{
register char c=gc();
while(c<'0'||c>'9')
    c=gc();  //ignore all characters till the first digit
int ret=0;
while(c>='0' && c<='9') //till we get a stream of digits.As soon as we get something else,we stop
{
ret=ret*10+(c-48);//construct the number
c=gc();
}
return ret;
}

ll v;
vector <vector<ll> > g(10000);
bool status[10000];
ll min1[10000];
ll parent[10000];
ll tim[10000];
ll time1;
void dfs(ll x)
{
	++time1;
  status[x]=true;
  tim[x]=time1;
  min1[x]=time1;
  for1(i,0,g[x].size())
  {v=g[x][i];
  	if (!status[v])
  		{parent[v]=x; 
  			dfs(v);}
  			
  }
  for1(i,0,g[x].size())
  {
  	v=g[x][i];
  	if (v!=parent[x])
  		min1[x]=Min(min1[x],min1[v]);
  }
}




  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    std::ios_base::sync_with_stdio (false);

    ll i,j,k,x,y,l,n,m,t,sum1;
    sum1=0;
t=read_ll();
for1(i1,1,t+1)
{
	for1(i,0,10000)
	{
		g[i].clear();
	}
	
	memset(status,0,sizeof(status));
	memset(min1,0,sizeof(min1));
	memset(parent,-1,sizeof(parent));
	n=read_ll();
	time1=0;
for1(i,0,n)
{
ll i2=read_ll();
char c1;scanf("%c",&c1);
k=read_ll();
scanf("%c",&c1);
for1(j,0,k)
{y=read_ll();
	g[i2].push_back(y);
	g[y].push_back(i2);
}

}
for1(i,0,n)
{
	if (!status[i])
		dfs(i);
}
set < pair<ll,ll> > s;
for1(i,0,n)
{
	for1(j,0,g[i].size())
	{
		v=g[i][j];
		if (tim[i]<tim[v])
		{
			if (min1[v]>tim[i])
			{
				s.insert(make_pair(Min(i,v),Max(i,v)));
				
			}
		}
	}
}
set <pair<ll,ll> > ::iterator it1;
it1=s.begin();
sum1=s.size();
if (i1!=1)
printf("\n");
printf("Case %lld: ",i1);
printf("\n");
printf("%lld critical links ",sum1);
while(it1!=s.end())
{   printf("\n");
	printf("%lld - %lld",(*it1).first,(*it1).second);
	++it1;
}


}
printf("\n");
return 0;
}