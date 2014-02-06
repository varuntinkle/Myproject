#include<stdio.h> 
#include<math.h>
 int main()
  {int num,d=1,i=0,n,k,j; 
  	printf("Enter the number whose table u want me to display\n"); 
  	scanf("%d",&num); 
  	printf("Enter the number till which u want the table of %d\n",num); 
  	scanf("%d",&n); 
  	for(i=0;d!=0;)
  	 { d=(num*n)/(int)pow(10,i); 
  	 	if(d==0) break; 
  	 	else i++; } 

  		printf("Maximum no.of digits in the table of %d is %d\n",num,i); 

  	
  	for(j=1;j<=n;j++) { printf("%d * %d =",j,num); 
  		for(k=i-1;k>=0;k--) 
  		
  		{int r; r=(j*num)/pow(10,k); if(r==0) printf("0"); 
  	if(r!=0) 
  		printf("%d\n",j*num); } } 
  	return 0; }