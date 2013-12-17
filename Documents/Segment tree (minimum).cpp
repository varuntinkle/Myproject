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
ll MAX=100;
vector <ll> seg (3*MAX);

void b (int n,int b,int e)
{
    if (b==e)
    {
        seg[n]=v[b];
        return;
    }
    b(2*n,b,(b+e)/2);
    b(2*n+1,(b+e)/2+1,e);
    M[n]=Min(seg[2*n],seg[2*n+1]);
}
int query (int n,int b,int e,int i ,int j)
{
    if ((b>j)||(e<i))
        return -1;
    if ((i<=b)&&(j>=e))
        return (seg[n]);
    p1=query(2*n,b,(b+e)/2,i,j);
    p2=query(2*n+1,(b+e)/2+1,e,i,j);
    if (p1==-1)
        return p2;
    if (p2==-1)
        return p1;
    else
        return Min(p1,p2);

}
void update (int n,int b,int e,int idx,int value)
{
    if (b==e)
    {
        seg[n]=value;
        return;
    }
    update (2*n,int b,int)

}

}


int main()
{ll i,j,k,x,y,l,n,m,t,sum1;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
return 0;
}
