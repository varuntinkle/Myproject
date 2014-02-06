# include <stdio.h>

int main()
{
int t,x,a,b,c,i,j;
printf("Enter 0 to terminate else input 1\n");
scanf("%d",&t);
while(t!=0)
{

scanf("%d%d",&i,&j);
int x;
for(x=1;x<=j;x++)
{
	printf("%02d*%d = %02d\n",x,i,x*i);
}

printf("Enter 0 to terminate else input 1\n");
scanf("%d",&t);
}
  return 0;
}