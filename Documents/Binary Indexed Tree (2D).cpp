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
# define Min(x,y)                   x<y?x:y
# define Max(x,y)                   x>y?x:y
# define INF (long long int ) 1e15
# define ALL(x)                  begin(x),end(x)



using namespace std;
typedef long long int ll;
ll gcd (ll a,ll b)
{
	ll x,y;
	x=Max(a,b);
	y=Min(a,b);
	if (x%y==0)
	return y;
	else
	gcd (x%y,y);
}

  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    ll i,j,k,x,y,l,n,m,t,sum1;
cin>>i>>j;
cout<<gcd(i,j)<<endl;

return 0;
}