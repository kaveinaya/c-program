#include<stdio.h>
int main(void)
{
	int arr1[50], arr2[50], n1, n2, n, i, j, k, merge[100];
	printf("size of first list");
	scanf("%d",&n1);
	for(i=0; i<n1; i++)
	{
		scanf("%d",&arr1[i]);
        printf("elements in first list",arr1[i]);
	}
	
    printf("size of second list");
	scanf("%d",&n2);
	for(i=0; i<n2; i++)
	{
		scanf("%d",&arr2[i]);
        printf("elements in second list",arr2[i]);
	}
	
	for(i=0; i<n1; i++)
	{
		merge[i]=arr1[i];
	}
	n=n1+n2;
	for(i=0, k=n1; k<n && i<n2; i++, k++)
	{
		merge[k]=arr2[i];
	}

	for(i=0; i<n; i++)
	{
		printf("%d  ",merge[i]);
	}
	return 0;
}
