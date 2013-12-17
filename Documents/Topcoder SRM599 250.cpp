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
ll i,j,k,x,y,l,n,m,t;


class
MiniatureDachshund
{
public:
    int maxMikan(vector <int> mikan, int weight)
    {
        sort(mikan.begin(),mikan.end());

       int l=mikan.size();
        j=0;k=0;
        while((weight<=3000)&&(k<=l))
        {
            weight+=mikan[k];
            if (weight<=3000)
             ++j;
             ++k;
        }
        return (j);
    }
};
