#include <stdio.h>
int main(void) {
	int count=0,d,b,n;
	scanf("%d",&n);
	d=n;
	while(d>0)
	{
		b=d/10;
		count++;
		d=b;
	}
	printf("%d",count);
	return 0;
}
