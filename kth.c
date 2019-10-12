#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int partition(int *a,int l,int h)
{
	int p,i,j;
	p=a[l];
	i=l+1;
	j=h;
	while(i<=j)
	{
		if(a[i]<p)i++;
		if(a[j]>p)j--;
		if(a[i]>p && a[j]<p)
		{
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[l],&a[j]);
	return j;
}
void ksmall(int *a,int l,int h,int k)
{
	int pi;
	if(l<h)
	{
		pi=partition(a,l,h);
		if(pi==k-1)
		{
			printf("%d",a[pi]);
		}
		else if(pi>k-1)
		{
			ksmall(a,l,pi-1,k);
		}
		else
		{
			ksmall(a,pi+1,h,k);
		}
	}
}
main()
{
	int *a,i,n,k;
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	ksmall(a,0,n-1,k);
}
