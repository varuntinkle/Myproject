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
struct node
{
    int n;
    node* next;
};
int main()
{
    node* head;
    node* conductor;
    conductor=new node;
    head =new node;
    conductor=head;
    if(conductor!=0)
    {
        while(conductor->next!=0)
            conductor=conductor->next;
    }
}
