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

struct c
{
    ll a;
    ll b;
};

bool operator <(const c&a,const c&b)
{
    if (a.a!=b.a)
        return (a.a>b.a);
    else
        return (a.b<b.b);
}
int main()
{
    vector <c> v(10);
    for1(i,0,5)
    {
        v[i].a=i;
        v[i].b=i;
    }
    for1(i,0,5)
    {
        v[i+5].a=i;
        v[i+5].b=30;
    }
    sort(v.begin(),v.end());
    for1(i,0,10)
    {
        cout<<v[i].a<<" "<<v[i].b<<endl;
    }
    return 0;
}
