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
ll i,j,k,x,y,l,n,m,t;


class
BigFatInteger2
{
public:
    string isDivisible(int A, int B, int C, int D)
    {
        if (C==1)
        {
            return("divisible");
        }
        if (A==C)
        {
            if (B>=D)
                return("divisible");
            else
                return ("non divisible");
        }
        n=1E9;
        n=sqrt(n);
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
vector <ll> p1;
for1(i,2,p.size())
{
    if (p[i]==1)
        p1.push_back(i);
}
vector <ll> a1,a2,b1,b2;
for1(i,0,p1.size())
{
    if (A%p1[i]==0)
    {
        a1.push_back(p1[i]);
        m=A;
        n=0;
        while((m>0)&&(m%p1[i]==0))
            ++n;
        a2.push_back(n);
    }
}
for1(i,0,p1.size())
{
    if (B%p1[i]==0)
    {
        b1.push_back(p1[i]);
        m=B;
        n=0;
        while((m>0)&&(m%p1[i]==0))
            ++n;
        b2.push_back(n);
    }
}
 ll l1=a1.size();ll l2=b1.size();
 if (l1!=l2)
    return("non divisible");
 if (l1==0)
    return ("non divisible");
 if (l2==0)
 {
     if ((A%C==0)&&(B>=D))
        return ("divisible");
     return ("non divisible");
 }
 for1(i,0,l1)
 {
     if (a1[i]!=b1[i])
        return ("non divisible");
     if (a2[i]*B<b2[i]*D)
        return ("non divisible");
 }
 return ("divisible");
    }
};
