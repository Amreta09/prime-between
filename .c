#include<stdio.h>
int main()
{
int a,b,i,j,f=0;
scanf("%d %d",&a,&b);
for(i=a+1;i<b;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
{
f=1;
}
}
if(f==0)
{
printf("%d",i);
}
}
return 0;
}
