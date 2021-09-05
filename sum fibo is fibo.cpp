/*
Given array a[] containing N elements, the task is to check if the sum of fibonacci elements of the array is a fibonacci number or 
not.
*/
#include<stdio.h>
#include<math.h>
int arr[1000];
int n, sum=0;
int i;
int x1,x2,l1,l2;

int fibotest(int a)
{
	x1=(5*a^2+4);
	l1=sqrt(x1);
	x2=(5*a^2-4);
	l2=sqrt(x2);

	if((l1*l1==x1)||(l2*l2==x2))
	{
		return true;
	}
	return false;
}

int main()
{
printf("Enter the number of elements in array:" );
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

for (i=0;i<n;i++)
{
  if(fibotest(arr[i]))
  sum+=arr[i];
}
if (fibotest(sum))
   printf("Yes");
else
	printf("No");  
}

