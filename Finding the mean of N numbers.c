#include<stdio.h>
int main()
{
	int a[25],n,i;
	float mean=0,sum=0;
	printf("\n\nEnter the Numbers of terms: ");
	scanf("%d",&n);
	printf("\nEnter the Numbers : \n");
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
 	for(i=1;i<=n;i++)
	sum=sum+a[i];
	mean=sum/n;
	printf("\nMean of entered Numbers are : %f",mean);
	return 0;
}