#include <stdio.h>

int main(void) 
{
	int i,n,t1=1,t2=1,new;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",t1);
		new=t1+t2;
		t1=t2;
		t2=new;
		
	}

	return 0;
}
