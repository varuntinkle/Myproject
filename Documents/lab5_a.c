# include <stdio.h>
int main()
{
int t,x,a,b;
printf("Enter 0 to terminate else input 1\n");
scanf("%d",&t);
while(t!=0)
{

bool b;
//scanf("%d%d",&a,&b);
for(int m=1;m<3;m++)
a++;
if (a==b)
x=0;
else if (a>b)
x=1;
else if (b>a)
x=2;
switch(x)
{
  case 1:
  {
  printf("%d\n",(a*a+b*b));
  break;
}
case 2:
  {
  printf("%d\n",(a*a*a+b*b*b));
  break;
}
case 0:
  {
  printf("%d\n",(a+b));
  break;
}

}
printf("Enter 0 to terminate else input 1\n");
scanf("%d",&t);
}
  return 0;
}