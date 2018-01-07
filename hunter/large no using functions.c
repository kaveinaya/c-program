#include<stdio.h>
int largest(int arr[],int size);
int main()
{
    	int arr[30],size,large,i;
    
	scanf("%d",&size);

	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
    	large = largest(arr,size);
    	printf("\nThe largest element is: %d\n",large);
	return 0;
    	
}
int largest(int arr[],int size)
{
    	int temp,i;
    	temp=arr[0];
    	for(i=1;i<size;i++)
            	{
    			if(arr[i]>temp)
    				temp=arr[i];
    		}
    	return(temp);
}
