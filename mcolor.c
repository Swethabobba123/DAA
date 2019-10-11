#include<stdio.h>
int nextvalue(int k,int x[15],int g[15][15],int m,int n)
{
int i;
while(1)
{
x[k]=(x[k]+1)%(m+1);
if(x[k]==0)
 return x[k];
    for(i=1;i<=n;i++)
    {
    if( g[k][i]!=0 && x[k]==x[i] )
    break;
    }
    if(i==n+1)
    return k;
   }
}
void mcolor(int k,int x[15],int n,int m,int g[15][15],int *c)
{
int j,p;
while(1)
{
p=nextvalue(k,x,g,m,n);
if(p==0)
return ;
if(k==n)
{
*c=*c+1;
for(j=1;j<=n;j++)
printf("%d ",x[j]);
printf("\n");
}
else
mcolor(k+1,x,n,m,g,c);
}
}
int main()
{
int m,n,g[15][15],i,j,x[15],c=0;
printf("enter no. of vertices:");
scanf("%d",&n);
for(j=1;j<=n;j++)
x[j]=0;
printf("\nenter the adjacency matrix:");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&g[i][j]);
printf("\n enter no. of colors: ");
scanf("%d",&m);
mcolor(1,x,n,m,g,&c);
printf("\ntotal : %d",c);
}
 




