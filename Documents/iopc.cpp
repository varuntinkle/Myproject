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
#ifndef ONLINE_JUDGE //  ifndef checks whether this macro is defined earlier or not
#define gc getchar //for local PC
#else
#define gc getchar_unlocked //for online judge environments
#endif
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

ll power(ll x)
{
	int sum1=0;
	while(x>1)
	{
		if (x%2!=0)
			return -1;
		++sum1;
		x/=2;
	}
	return sum1;
}

ll power2(ll x)
{
	int sum1=0;
	while(x>1)
	{
		if (x%2!=0)
			return x;
		x/=2;
	}
	return x;
}

ll gcd(ll a,ll b)
{
	ll x,y;
	x=Max(a,b);
	y=Min(a,b);
	if (x%y==0)
	return y;
	else
	gcd(b,a%b);
}



int main()
{
	ll i,j,k,x,y,z,t,m,n,a,b,c;
 	#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
	#endif
    std::ios_base::sync_with_stdio (false);
	cin>>t;
	 k=0;
	 while(t--)
	{	k=0;
		ll p,q;
		cin>>p>>q;
		p/=gcd(p,q);
		q/=gcd(p,q);
		string a="YES",b="NO";
		 if (p!=1)
 		{
 			y=power(q+1);

 			x=power(p);

 			if ((x<=y)&&(x!=-1)&&(y!=-1))
 				cout<<a<<endl;
 			else
 				cout<<b<<endl;
 		}

 		else
 		{
 			x=power2(q);
 			y=power(x+1);
 			if (y==-1)
            cout<<b<<endl;
 		    else
 		    cout<<a<<endl;
 		}

	} 
return 0;
}