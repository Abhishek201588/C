#include<stdio.h>  
 int main()    
{    
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n1);    
printf("Enter a number:");    
scanf("%d",&n2);  
while(n1>0 && n2>0)    
{    
m=n1%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
}