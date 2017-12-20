#include<stdio.h>
#include<string.h>
int main(void)
{
int n,i,j;
char a[30];
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
	int c=1;
	for(j=i+1;j<n;j++)
	{
		if(a[j]==a[i]&&a[i]!='\0')
		{
		c++;
		a[j]='\0';
		}
	}

	if(a[i]=='\0')
	{
		printf("");
	}
	else
	{
	printf("%c:%d\n",a[i],c);
	}
}
return 0;
}

	
