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

# define for1(i,k,n)              for(int i=k;i<n;i++)
# define for2(i,k,n)              for(int i=k;i<=n;i++)

# define ALL(x)                  begin(x),end(x)
using namespace std;
typedef long long int ll;




int main()
{ll i,j,k,x,y,l,n,m,t,sum1;
queue q;
cin>>n;
vector < vector<ll> > t(1000000,-1);
vector < vector<ll> > v(1000000,-1);
vector < vector<ll> > v(n);
cin>>k; x=0;
for1(i,0,k)
{
    cin>>m;
    for1(j,0,m)
    {
        cin>>y;
        v[i].push_back(y);
        t[y]=i;
    }
}

return 0;
}
