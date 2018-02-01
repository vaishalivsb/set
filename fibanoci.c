#include<stdio.h>
int main()
{
int sum=0,n,i,a[100];
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
sum=sum+a[i];
printf("%d",sum);
}
return 0;
}
