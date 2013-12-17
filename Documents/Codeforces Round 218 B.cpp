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

ll gcd(ll a,ll b)
{
ll x=max(a,b);
ll y=min(a,b);
if(x%y==0)
return y;
else
gcd(y,x%y); }


int main()
{ll i,j,k,x,y,l,n,m,t,sum1;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
ll a;ll b;
cin>>a>>b;
k=gcd(a,b);
x=a/k;
y=b/k;
ll c1=0; ll c2=0;
    while ((x>0)&&(x%5==0))
    {
        ++c1; x/=5;
    }
     while ((x>0)&&(x%3==0))
    {
        ++c1; x/=3;
    }
     while ((x>0)&&(x%2==0))
    {
        ++c1; x/=2;
    }
if (x>1)
{
    cout<<"-1"<<endl;
    return 0;
}
while ((y>0)&&(y%5==0))
    {
        ++c2; y/=5;
    }
     while ((y>0)&&(y%3==0))
    {
        ++c2; y/=3;
    }
     while ((y>0)&&(y%2==0))
    {
        ++c2; y/=2;
    }
if (y>1)
{
    cout<<"-1"<<endl;
    return 0;
}
    cout<<c1+c2<<endl;

return 0;
}
