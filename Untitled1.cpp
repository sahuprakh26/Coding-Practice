#include<stdio.h>
int i;
int size1, size2;
int arr1[100], arr2[100];
int median;
int fl, fr, sl, sr;
int p1, p2;
main()
{
	printf("Enter size of first array :");
	scanf("%d",&size1);
	printf("Enter size of second array :");
	scanf("%d",&size2);
	printf("Enter the first ")
	for(i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	median = (size1 + size2)/2;
	p1 = size1/2;
	p2 = p1 - median;
	
	for(i=0;i<size1+size2;i++)
	{
		fl = p1-1;
		fr = p1;
		sl = p2-1;
		sr = p2;	
	}
}
