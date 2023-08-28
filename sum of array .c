#include<stdio.h>
int sum (int a[], int size)
{
	int sum=0,i;
	for(i=0;i<size;i++)
	{
		sum = sum + a[i];
	}
	return sum;
}


main()
{
	int n,i,size;
	int a[] = {1,2,3,4,5,6,7,8,9};
	
	n= sizeof(a)/sizeof(0);
	
	printf("sum = %d\n",sum(a,n));
}