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
ll MaxVal;
vector <ll> v;
vector <ll> tree;
ll read(ll idx){
	ll sum = 0;
	while (idx > 0){
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

void update(ll idx ,ll val){
	while (idx <= MaxVal){
		tree[idx] += val;
		idx += (idx & -idx);

	}
}
void scale(ll c){
	for (ll i = 1 ; i <= MaxVal ; i++)
		tree[i] = tree[i] / c;
}

int main()
{ll i,j,k,x,y,n,m,t,sum1,q;
ll x1,x2,y1,y2;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");

cin>>n;
cin>>q; char c;
MaxVal=n;
tree.resize(n+1);
v.resize(n+1);
fill(tree.begin(),tree.end(),0);
for1(i,1,n+1)
{
    cin>>v[i];
 update(i,v[i]);
}
for1(i,0,q)
{
    cin>>c>>x1>>x2;
// cout<<c<<" "<<x1<<" "<<x2<<endl;
    if (c=='S')
    {
      ++x1;++x2;
      y2= read(x2)-read(x1-1);
      cout<<y2<<endl;
    }
    if (c=='G')
    {
        ++x1;
        update(x1,x2);
    }
    if (c=='T')
    {
        ++x1;
        update(x1,-x2);
    }
}
return 0;
}

