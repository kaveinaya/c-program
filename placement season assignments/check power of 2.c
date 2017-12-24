#include <stdio.h>
int main(void) {
	int num,i,pow=2,x=1,status=0;
	printf("enter the number to check power of two\n");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
	x=x*pow;
	if(x==num)
	{
		status=1;
		break;
	}
	if(x>num)
	break;
	}
	if(status=1)
	printf("%d is power of 2",num);
	else
	printf("%d is not power of 2",num);
	
	return 0;
}
