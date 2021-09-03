#include<stdio.h>    
#include<stdlib.h>  
int main(){  
  int ch=65;    
    int i,j,k,m,r;    
  printf("Enter the number of rows");
  scanf("%d",&r);
    for(i=1;i<=r;i++)    
    {    
        for(j=r;j>=i;j--)    
            printf(" ");    
        for(k=1;k<=i;k++)    
            printf("%c",ch++);    
            ch--;    
        for(m=1;m<i;m++)    
            printf("%c",--ch);    
        printf("\n");    
        ch=65;    
    }    
return 0;  
}  