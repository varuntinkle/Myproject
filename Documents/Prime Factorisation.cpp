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
{ll i,j,k,x,y,l,n,m,m1,t,sum1;
cin>>m1;
n=(ll)sqrt(m1);
vector<bool> p(n+1);
fill(p.begin(),p.end(),true);
m=(ll)sqrt(n);
for2(i,2,m)
{
if (p[i])
{
    for(j=i;i*j<=n;j++)
        p[i*j]=false;
}
}
vector <ll> Prime;
for1(i,2,p.size())
{
    if (p[i])
        Prime.push_back(i);
}
vector<ll>a1,a2;
for1(i,0,Prime.size())
{
    if ((m1%Prime[i])==0)
{
    ll n=0;
    a1.push_back(Prime[i]);
    while((m1>0)&&(m1%Prime[i]==0))
    {
        ++n;m1/=Prime[i];
    }
    a2.push_back(n);
}
}
if (m1>1)
{a1.push_back(m1);a2.push_back(1);}
for1(i,0,a1.size())
{
    cout<<a1[i]<<" "<<a2[i]<<endl;
}
return 0;
}
