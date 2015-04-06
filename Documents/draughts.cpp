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
# define INF (long long int ) 1e15
# define ALL(x)                  (begin(x),end(x))
# define Abs(x)                 (x>=0?x:-x)
# define MOD                        1000000007
# define Size                       60000
# ifndef ONLINE_JUDGE //  ifndef checks whether this macro is defined earlier or not
# define gc getchar //for local PC
# else
# define gc getchar_unlocked //for online judge environments
# endif
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


vector < vector<ll> > g(Size);
bool status[Size];
bool exist[Size];
ll parent[Size];
bool a[Size];
ll count1,count2;
void dfs(ll x)
{
	ll len=g[x].size();
	status[x]=true;
	for1(i,0,len)
	{
		if (!status[g[x][i]])
		{
			parent[g[x][i]]=x;	
			dfs(g[x][i]);
		}
	} 
	for1(i,0,len)
	{
		if (g[x][i]!=parent[x])
		exist[x]=exist[x]||exist[g[x][i]];
	}
	if (a[x])
		++count1;
	if (exist[x])
		++count2;
}


int main()
{
	ll i,j,k,x,y,z,t,m,n,b,c;
 	#ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
	#endif
        std::ios_base::sync_with_stdio (false);
    cin>>n>>m;
    for1(i,0,n)
    {
    	cin>>a[i];
    	exist[i]=a[i];
    	status[i]=false;
    	parent[i]=-1;
    }
    for1(i,0,m)
    {
    	cin>>x>>y;
    	--x;--y;
    	g[x].push_back(y);
    	g[y].push_back(x);
    }
    ll sum1=0,sum2=0;
    for1(i,0,n)
    {
    	if (!status[i])
    		{ 
    			count1=0;
    			count2=0;
    			dfs(i);
    			sum1+=(count1*(count1-1))/2;
    			if (count1>1)
    				sum2+=count2;


    		}
    }
cout<<sum1<<" "<<sum2<<endl;

return 0;
}