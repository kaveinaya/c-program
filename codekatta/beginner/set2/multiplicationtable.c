#include <stdio.h>

int main(void) {
	int a,i,c;
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		c=a*i;
	printf("%d*%d=%d\n",a,i,c);
	}
	return 0;
}
