#include<stdio.h>
int min(int a,int b)
{
if(a<b)
return a;
return b;
}
int main()
{
int n,i,j,a[100][100],p=1;
printf("enter size of matrix : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
for(j=1;j<=n;j++){
printf("enter a[%d][%d] : ",i,j);
   scanf("%d",&a[i][j]);
}
while(p<=n)
{
   for(i=1;i<=n;i++)
        {
  for(j=1;j<=n;j++)
  {
 a[i][j]=min(a[i][j],a[i][p]+a[p][j]);
         }
   }
   p++;
}
for(i=1;i<=n;i++){
 for(j=1;j<=n;j++){
  printf("%d ",a[i][j]);
 }
  printf("\n");
}
    return 0;
}
