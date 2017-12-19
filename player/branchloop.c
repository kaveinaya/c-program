#include<stdio.h>
int main(void)
{
int i,a=9,d,c,sum=0;
d=a;
for(i=0;i<4;i++)
{
sum=sum+d;
c=d*10+a;
d=c;
}
printf("%d",sum);
return 0;
}

