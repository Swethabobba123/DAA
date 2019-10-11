#include<stdio.h>
void maxmin(int a[],int l,int h,int *min,int *max)
{
 int max1,min1,mid;
 if(l==h)
 {
 *max=a[l];
 *min=a[h];
 }
 else if(l==h-1){
  if(a[l]>a[h]){
   *max=a[l];
   *min=a[h];
  }
  else{
   *max=a[h];
   *min=a[l];
  }
 }
 else{
  mid=(l+h)/2;
  maxmin(a,l,mid,min,max);
  max1=(*max);
  min1=(*min);
  maxmin(a,mid+1,h);
  if((*max)<max1)
  *max=max1;
  if((*min)>min1)
  *min=min1;
  }
     
}
main(){
int n,a[100],i,min=0,max=0;
printf("enter no. of elements");
scanf("%d",&n);
printf("enter elemnts");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
maxmin(a,0,n-1,&min,&max);
printf("max is :%d\n",max);
printf("min is :%d\n",min);
}
