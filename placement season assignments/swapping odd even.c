#include <stdio.h>
#include<string.h>
int main(void)
{
	int temp,n,i;
	char a[30];
	gets(a);
	n=strlen(a);
	if(n%2==0)
	{
	for(i=0;i<n;i+=2)
	{
		temp=a[i+1];
		a[i+1]=a[i];
		a[i]=temp;
	}
	}
	else
	{
	for(i=0;i<n-1;i+=2)
	{
		temp=a[i+1];
		a[i+1]=a[i];
		a[i]=temp;
	
	}
	}
puts(a);
return 0;
}


