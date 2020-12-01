#include<stdio.h>
int main()
{
 int arr[10];
 int i,sum=0;
 printf("Enter 10 array elements:\n");
for(i=0;i<10;i++)
{
 scanf("%d",&arr[i]);
}
for(i=0;i<10;i++)
{
 sum+=arr[i];
}
printf("required sum is : %d",sum);
return 0;
}
