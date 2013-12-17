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
 vector <ll> v;
 tuple < ll,ll,ll > p;






int main()
{ifstream fin;ofstream fout;
    fin.open("D:/Input.txt");
fout.open("D:/Output.txt");

    ll i,j,k,x,y,l,n,m,t,s;
    cin>>t;
    while(t--)
    {cin>>n>>m;
vector < vector<ll> > v(n,vector<ll>(m));
vector < vector <ll> > D(n,vector<ll>(m));
for1(i,0,n)
{
    for1(j,0,m)
    {
        D[i][j]=100000;
    }
}
for1(i,0,n)
{
    for1(j,0,m)
    cin>>v[i][j];
}
 set < tuple<ll,ll,ll> > Q;
    D[0][0]=0;
    Q.insert(make_tuple(0,0,0));
    for1(i,0,n)
    {
        for1(j,0,n)
    {

    if (!(i==0)&&(j==0))
    {
        Q.insert(make_tuple(100000,i,j));
    } } }
    while(!Q.empty())
    {
        p=*Q.begin();
        Q.erase(Q.begin());
        ll x=get<1>(p);
        ll y=get<2>(p);
        ll d=get<0>(p);
        if (x+1<m)
            {ll dist=D[x+1][y];
            if (dist>D[x][y]+v[x+1][y])
            {
                Q.erase(Q.find(make_tuple(dist,x+1,y)));
                dist=D[x][y]+v[x+1][y];
                Q.insert(make_tuple(dist,x+1,y));
                D[x+1][y]=dist;
            } }
             if (x-1>0)
            {ll dist=D[x-1][y];
            if (dist>D[x][y]+v[x-1][y])
            {
                Q.erase(Q.find(make_tuple(dist,x-1,y)));
                dist=D[x][y]+v[x-1][y];
                Q.insert(make_tuple(dist,x-1,y));
                D[x-1][y]=dist;
            }
        }
         if (y+1<n)
            {ll dist=D[x][y+1];
            if (dist>D[x][y]+v[x][y+1])
            {
                Q.erase(Q.find(make_tuple(dist,x,y+1)));
                dist=D[x][y]+v[x][y+1];
                Q.insert(make_tuple(dist,x,y+1));
                D[x][y+1]=dist;
            } }
            if (y-1>0)
            {ll dist=D[x][y-1];
            if (dist>D[x][y]+v[x][y-1])
            {
                Q.erase(Q.find(make_tuple(dist,x,y-1)));
                dist=D[x][y]+v[x][y-1];
                Q.insert(make_tuple(dist,x,y-1));
                D[x][y-1]=dist;
            } }
    }
cout<<D[n-1][m-1]<<endl; }

return 0;
}
