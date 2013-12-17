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

# define ALL(x)                  begin(x),end(x)
using namespace std;
typedef long long int ll;
vector <ll> v;
ll max_x,max_y;
vector < vector<ll> > tree;

void update(ll x , ll y , ll val){
	ll y1;
	while (x <= max_x){
		y1 = y;
		while (y1 <= max_y){
			tree[x][y1] += val;
			y1 += (y1 & -y1);
		}
		x += (x & -x);
	}
	ll read (ll x,ll y)
	{  ll y1=y; ll sum1=0;
	    while(x>0)
            while(y>0)
            {
                 sum1+=tree[x][y];
        {  y=y1;
                y-=(y&-y);

            }
            x-=(x&-x);
        }
        return (sum1);
	}
        int main()
{
    ll i,j,k,x,y,l,n,m,t,sum1;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
return 0;
}

