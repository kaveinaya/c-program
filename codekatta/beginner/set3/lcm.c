#include <stdio.h>

int main(void)
{
	int n1,n2,min;
	scanf("%d%d",&n1,&n2);
	min=(n1>n2)?n1:n2;
	while(1)
	{
		if(min%n1==0&&min%n2==0)
		{
			printf("%d",min);
			break;
		}
		min++;
	}
		return 0;
	}
