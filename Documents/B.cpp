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






  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    std::ios_base::sync_with_stdio (false);

    ll i,j,k,x,y,l,n,m,t,sum1;
    sum1=0;
cin>>n>>m>>k;
ll b[n][m];
for1(i,0,n)
{
	for1(j,0,m)
	cin>>b[i][j];
}
set < pair<ll,ll> > s;
ll c[m];

for1(i,0,n)
{
	for1(j,0,m)
	{
		c[j]=b[i][j];
	}
	sort(c,c+m);
	
	for1(j,0,m)
	{

if (c[j]!=b[i][j])
	for1(x,j+1,m)
{
	if (b[i][x]==c[j])
	{ if (b[i][x]<b[i][j])
		{swap(b[i][x],b[i][j]);
	
		 cout<<j<<" "<<x<<endl;s.insert(make_pair(j+1,x+1));}

	}

	
}
}
}
for1(i,0,n)
{
	for1(j,0,m)
	cout<<b[i][j]<<" ";
	cout<<endl;
}
cout<<s.size()<<endl;
set <pair<ll,ll> > ::iterator it1;
for(it1=s.begin();it1!=s.end();it1++)
{
	cout<<(*it1).first<<" "<<(*it1).second<<endl;
} 
return 0;
}