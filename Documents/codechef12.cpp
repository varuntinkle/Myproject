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
# include <map>
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

 
 
 
 
 
 
 
 
  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    std::ios_base::sync_with_stdio (false);
 
    ll i,j,k,x,y,l,n,m,t,sum1;
t=read_ll();
while(t--)
{
	sum1=0;
	n=read_ll();
	k=read_ll();
vector   < pair<ll,ll> > v[n];
map <ll,ll> map1;
set<ll> s; m=0;
	for1(i,0,n)
	{
		x=read_ll();
		y=read_ll();
		l=read_ll();
		--l;
		if (s.find(l)==s.end())
		{
			s.insert(l);
			map1[l]=m;
			++m;

		}
		v[map1[l]].push_back(make_pair(y,x));
	}
	for1(i,0,m)
	{
		sort(v[i].begin(),v[i].end());
		x=0;
		for1(j,0,v[i].size())
		{
 
      ll t1=v[i][j].first;
      ll t2=v[i][j].second;
      //cout<<t2<<" "<<t1<<endl;
      if (t2>=x)
      {
      	++sum1;
      	x=t1;
      }
		}
	}
	cout<<sum1<<endl;
 
}
return 0;
} 