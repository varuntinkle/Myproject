/*
ID: varun.t1
LANG: C++
TASK: pprime
*/
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

# define ALL(x)                  begin(x),end(x)
using namespace std;
typedef long long int ll;
vector <ll> v;
ll x1,y1;
bool prime(ll k)
{
   ll m=(ll)sqrt(k);
    for2(i,2,m)
    {
        if ((k%i==0)&&(i<k))
            return false;
    }
    return true;
}
void pal (ll n)
{
    ll i,j,k,x,y,l,m,t,r,sum1;
if (n%2==0)
{m=n/2;
for1(i,ceil(pow(10,m-1)),ceil(pow(10,m)))
{
    y=ceil(pow(10,m));
    x=i*y+i;
    if ((x1<=x)&&(x<=y1))
    v.push_back(x);

}
 }
else
{
    m=n-1;
    m/=2;
    for1(i,ceil(pow(10,m-1)),ceil(pow(10,m)))
{
    y=ceil(pow(10,m+1));
    for1(j,0,10)
    {x=i*y+i;
    x+=ceil(pow(10,m))*j;
     if ((x1<=x)&&(x<=y1))
    v.push_back(x); }

} }
if (n==1)
{
    for1(i,0,10)
     if ((x1<=i)&&(i<=y1))
    v.push_back(i);
}
}

int main()
{ll i,j,k,l,n,m,t,sum1;
ifstream fin; ofstream fout;
fin.open("pprime.in");
fout.open("pprime.out");
fin>>x1>>y1;
ll n1=floor(log10(x1))+1;
ll n2=floor(log10(y1))+1;
for2(i,n1,n2)
{
        pal(i);
}
for1(i,0,v.size())
{
      if (prime(v[i]))
      fout<<v[i]<<endl;
}
return 0;
}
