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
# define ALL(x)                  begin(x),end(x)
using namespace std;
typedef long long int ll;




int main()
{
    ll i,j,k,x,y,l,n,m,t;
cin>>n>>k;
vector<ll> v(n);
vector <ll> b(k+1);
ll sum1=0;
for1(i,0,n)
{cin>>v[i];
b.clear();
stringstream convert;
convert<<v[i];
string s=convert.str();
l=s.length();
fill(b.begin(),b.end(),0);
for1(j,0,l)
{
    m=s[j]-48;
    if (m<=k)
    {
        ++b[m];
    }
}
ll sum2=0;
for1(j,0,k+1)
{
    if (b[j]==1)
        ++sum2;
}
if (sum2==k+1)
    ++sum1;
}
cout<<sum1<<endl;
return 0;
}
