#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[50],n,sum,j,i;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements of an array\n");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("enter the any number to find its equivalent sum in an array\n");
scanf("%d",&sum);
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
    if(sum==(a[i]+a[j]))
    {
    printf("sum is found in an array\n%d %d",a[i],a[j]);
    exit(0);
    }
  }
}
printf("sum is found in an array\n");
return 0;
}
