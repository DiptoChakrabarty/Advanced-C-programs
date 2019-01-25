#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
int a[100],n,i,j=0;    
 
printf("Provide number to be converted: ");    
scanf("%d",&n);
while(n>0)
{
    i=n%2;
    a[j]=i;
    n=n/2;
    j++;
}
printf("\n");
for(i=0;i<j;i++)
{
    printf("%d",a[j-i-1]);
}
return 0;  
}  
