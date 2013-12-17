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
vector <ll> v1;
vector <bool> v2;
ll n;
void up( ll i,ll k)
{  if (v2[i])
up(i+1,k);
if (i<n)
    {ll x;
    v1[i]+=k;
    x=v1[i];

  if (v1[i]>v[i])
  {    v2[i]=true;
      v1[i]=v[i];
      if (i!=n-1)
      {
          up (i+1,x-v[i]);
      }
  }
}
}



int main()
{ll i,j,k,x,y,l,m,t,sum1;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
cin>>n;
v.resize(n);
for1(i,0,n)
cin>>v[i];
cin>>m;   ll p;
v1.resize(n);
v2.resize(n);
fill(v1.begin(),v1.end(),0);fill(v2.begin(),v2.end(),0);
for1(i,0,m)
{
    cin>>k;
    if (k==1)
    {
        cin>>p>>j;
        --p;
        while(v2[p])
            ++p;
        if (p<=n-1)
        up(p,j);

    }
    else
    {
        cin>>p;
        --p;
        cout<<v1[p]<<endl;
    }
}
return 0;
}
