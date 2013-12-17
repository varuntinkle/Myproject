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
# define Max(a,b)                       a>b?a:b
using namespace std;
typedef long long int ll;




int main()
{

    ll i,j,k,x,y,l,n,m,t;
    ifstream fin;
    ofstream fout;
    fin.open("D:\Input.txt");
    fout.open("D:\Output.txt");
    fin>> n;
    vector <ll> v1(n); vector <ll> v2(n);
    for1(i,0,n)
    {
        fin>>v1[i]>>v2[i];
    }
    fin>>m;
    vector < vector<ll> > c(n,vector<ll>(m+1,0));
    if (v1[0]<=m)
        c[0][v1[0]]=v2[0];
    for1(i,1,n)
    {
        for2(j,0,m)
        {
            c[i][j]=c[i-1][j];
    if (j-v1[i]>=0)
    {
        c[i][j]=Max(c[i][j],c[i-1][j-v1[i]]+v2[i]);

    }

        }
    }
    /* ll max1=c[n-1][0];
    for2(j,0,m)
    max1=max(max1,c[n-1][j]);
    cout<<max1<<endl; */

    for1(i,0,n)
    {
        for2(j,0,m)
        {
            fout<<c[i][j]<<" ";

        }
        fout<<endl;
    }
    return 0;
}
