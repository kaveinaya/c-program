#include <stdio.h>
int main(void) {
	int i,h,l,flag;
	scanf("%d",&l);
	scanf("%d",&h);
	while(l<h)
	{
		flag=0;
		for(i=2;i<=l/2;i++)
		{
			if(l%i==0)
			{
				flag=1;
				break;
		}
		}
		if(flag==0)
		{
		printf("%d\n",l);
		}
		l++;
	}
	
	return 0;
}
