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





int main()
{ll i,j,k,x,y,l,n,m,t,q,sum1;
ll x1,y1,x2,y2;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
cin>>n;
vector < vector<ll> > v(n+1,vector<ll>(n+1,0));
for1(i,1,n+1)
{
    for1(j,1,n+1)
    {
        cin>>v[i][j];
    }
}
 vector < vector<ll> > v1(n+1,vector<ll>(n+1,0));
 vector < vector<ll> > v2(n+1,vector<ll>(n+1,0));
 vector < vector<ll> > v3(n+1,vector<ll>(n+1,0));
 vector < vector<ll> > v4(n+1,vector<ll>(n+1,0));
 vector < vector<ll> > v5(n+1,vector<ll>(n+1,0));
 vector < vector<ll> > v6(n+1,vector<ll>(n+1,0));
 vector < vector<ll> > v7(n+1,vector<ll>(n+1,0));
 vector < vector<ll> > v8(n+1,vector<ll>(n+1,0));
 vector < vector<ll> > v9(n+1,vector<ll>(n+1,0));
 vector < vector<ll> > v10(n+1,vector<ll>(n+1,0));
 for1(i,1,n+1)
 {
     for1(j,1,n+1)
     {
         v1[i][j]=v1[i][j-1]+v1[i-1][j]-v1[i-1][j-1];
         if (v[i][j]==1)
            ++v1[i][j];
             v2[i][j]=v2[i][j-1]+v2[i-1][j]-v2[i-1][j-1];
         if (v[i][j]==2)
            ++v2[i][j];
             v3[i][j]=v3[i][j-1]+v3[i-1][j]-v3[i-1][j-1];
         if (v[i][j]==3)
            ++v3[i][j];
             v4[i][j]=v4[i][j-1]+v4[i-1][j]-v4[i-1][j-1];
         if (v[i][j]==4)
            ++v4[i][j];
             v5[i][j]=v5[i][j-1]+v5[i-1][j]-v5[i-1][j-1];
         if (v[i][j]==5)
            ++v5[i][j];
             v6[i][j]=v6[i][j-1]+v6[i-1][j]-v6[i-1][j-1];
         if (v[i][j]==6)
            ++v6[i][j];
             v7[i][j]=v7[i][j-1]+v7[i-1][j]-v7[i-1][j-1];
         if (v[i][j]==7)
            ++v7[i][j];
             v8[i][j]=v8[i][j-1]+v8[i-1][j]-v8[i-1][j-1];
         if (v[i][j]==8)
            ++v8[i][j];
             v9[i][j]=v9[i][j-1]+v9[i-1][j]-v9[i-1][j-1];
         if (v[i][j]==9)
            ++v9[i][j];
             v10[i][j]=v10[i][j-1]+v10[i-1][j]-v10[i-1][j-1];
         if (v[i][j]==10)
            ++v10[i][j];
     }
 }



vector<ll> a(11,0);
cin>>q;
for1(i,0,q)
{
    cin>>x1>>y1>>x2>>y2;
    --x1;--y1;
    k=0;
    if ((v1[x2][y2]-v1[x1][y2]-v1[x2][y1]+v1[x1][y1])>0 )
        ++k;
    if ((v2[x2][y2]-v2[x1][y2]-v2[x2][y1]+v2[x1][y1])>0 )
        ++k;
        if ((v3[x2][y2]-v3[x1][y2]-v3[x2][y1]+v3[x1][y1])>0 )
        ++k;
        if ((v4[x2][y2]-v4[x1][y2]-v4[x2][y1]+v4[x1][y1])>0 )
        ++k;
        if ((v5[x2][y2]-v5[x1][y2]-v5[x2][y1]+v5[x1][y1])>0 )
        ++k;
        if ((v6[x2][y2]-v6[x1][y2]-v6[x2][y1]+v6[x1][y1])>0 )
        ++k;
        if ((v7[x2][y2]-v7[x1][y2]-v7[x2][y1]+v7[x1][y1])>0 )
        ++k;
        if ((v8[x2][y2]-v8[x1][y2]-v8[x2][y1]+v8[x1][y1])>0 )
        ++k;
        if ((v9[x2][y2]-v9[x1][y2]-v9[x2][y1]+v9[x1][y1])>0 )
        ++k;
        if ((v10[x2][y2]-v10[x1][y2]-v10[x2][y1]+v10[x1][y1])>0 )
        ++k;
        cout<<k<<endl;
}

return 0;
}
