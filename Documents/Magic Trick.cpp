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
typedef unsigned long long int ll;

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


ll mulmod(ll a,ll b,ll c){
    ll x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}
ll modulo(ll a,ll b,ll c){
    ll x=1,y=a; // long long is taken to avoid overflow of intermediate results
    while(b > 0){
        if(b%2 == 1){
            x=(x*y)%c;
        }
        y = (y*y)%c; // squaring the base
        b /= 2;
    }
    return x%c;
}






  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    std::ios_base::sync_with_stdio (false);

    ll i,j,k,x,y,l,n,m,t,sum1;
cin>>t;
while(t--)
{
	cin>>n;
	ll a[n],b[n],c[n];
	for1(i,0,n)
	cin>>a[i];
	ll a1,b1,c1;
	string s;
	cin>>a1>>b1>>c1;
	a1%=c1;
	b1%=c1;
	cin>>s; ll x1=0; ll y1=n-1; ll count1=0; sum1=0;
	for1(i,0,n)
	a[i]%=c1;
	for1(i,0,n)
	{
		if (s[i]=='R')
		{
  swap(x1,y1);
  b[i]=x1;
  ++count1;
  if(count1%2==0)
  	++x1;
  else
  	--x1;
		}
		else
		{
			b[i]=x1;
			if (count1%2==0)
			++x1;
		else
			--x1;
		}
		
		if (i==0)
		{
			c[i]=a[b[i]];
			c[i]%=c1;
		}
		
		if (i!=0)
		{
			ll diff;
diff =a[b[i]]-a[b[i-1]]+c1;
	diff%=c1;
	c[i]=mulmod(modulo(b1,sum1,c1),diff,c1)+c[i-1];
	c[i]%=c1;
		}
		if (s[i]=='A')
		{
			c[i]+=a1;
			c[i]%=c1;
		}
		if (s[i]=='M')
		{
			c[i]=mulmod(c[i],b1,c1);
			++sum1;
		}
	
	}
	for1(i,0,n)
	{
		cout<<c[i]<<" ";
	}
		cout<<endl;
	
}
return 0;
}