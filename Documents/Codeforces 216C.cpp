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
int i,j,k,x,y,l,n,m,t;


class

FoxAndClassroom
{
public:
string ableTo(int n, int m)

{
    vector < vector<int> > s(n*m);
    for1(i,0,n)
    {
        for1(j,0,m)
        s[i][j]=1;
    }
    int x,y; x=0;y=0;
    s[x][y]=1;
    for1(i,0,n*m)
    {
        if (x!=0)
            --x;
        else
            x=n-1;
        if (y!=m-1)
            ++y;
        else
            y=0;
            s[x][y]=1;
    }
for1(i,0,n)
{
    for1(j,0,m)
    {
        if (s[i][j]==0)
            return ("IMPOSSIBLE");
    }
}
return ("POSSIBLE");

    }
};
