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

    ll i,j,k,x,y,l,n,m,t,sum1,a,b;
cin>>m;
vector <ll> x1(m);
vector <ll> x2(m);
vector <ll> x3(m);
for1(i,0,m)
{
	cin>>x[i];
	if (x[i]==1)
		cin>>x2[i];
	else
		{cin>>x2[i]>>x3[i];}
}
cin>>n;
vector <ll> v(n);
vector <ll> b(100000+1);
fill(b.begin(),b.end(),0);
for1(i,0,n)
{cin>>v[i];
	++b[v[i]];}
j=n-1;
for(i=m-1;i>=0;i--)
{
	if (x1[i]==1)
	{
		--j;
	}
	else
	{
		j-=x2[i]*x3[i];
	}
}
return 0;
}