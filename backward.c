#include<stdio.h>
int main(){
int cost[20][20],p[20],c[20],i,j,k,n,b[20],m=2,min,sum=0,d;
printf("enter no of vertices");
scanf("%d",&n);
printf("enter no of stages");
scanf("%d",&k);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;
}
}
c[1]=0;
for(i=2;i<=n;i++)
{
if(cost[1][i]!=999)
{
c[i]=cost[1][i];
b[i]=1;
}
else
{
min=999;
for(j=m;j<i;j++)
{
if(min>c[j]+cost[j][i])
{
  min=c[j]+cost[j][i];
  c[i]=c[j]+cost[j][i];
  b[i]=j;
  }
}
}
}

p[1]=1;
p[k]=n;
for(j=k-1;j>=2;j--)
{
d=p[j+1];
p[j]=b[d];
}
for(i=1;i<=n;i++)
printf("%d ",b[i]);
for(i=1;i<=k;i++)
{
printf("%d ",p[i]);
}
for(i=1;i<k;i++)
{
sum=sum+cost[p[i]][p[i+1]];
}
printf("%d",sum);
}
