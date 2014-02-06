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

using namespace std;
typedef long long int ll;






vector <vector<ll> > g;
vector <vector <w> > g;
vector <bool> status;
ll sum1;
void bfs(ll x)
{
	
}
  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    std::ios_base::sync_with_stdio (false);

    ll i,j,k,x,y,l,n,m,t;
cin>>t;
for2(m,1,t)
{sum1=0;
	cin>>n;
	for1(i,1,n)
	{
		cin>>x>>y>>l;
		g[x].push_back(y);
		g[y].push_back(x);
		w[x].push_back(l);
		w[y].push_back(l);
	}

}
return 0;
}