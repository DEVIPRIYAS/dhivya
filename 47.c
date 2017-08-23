#include<stdio.h>
 
int main()
{
int a[50],i,n,high,low;
printf("How many elements:");
scanf("%d",&n);
printf("Enter the Array:");
for(i=0;i<n;++i)
scanf("%d",&a[i]);
high=low=a[0];
for(i=1;i<n;++i)
{
if(a[i]>high)
high=a[i];
if(a[i]<low)
low=a[i];
}
printf("The highest element is %d",high);
printf("\nThe lowest element is %d",low);
return 0;
}
