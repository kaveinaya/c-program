#include <stdio.h>
int main(void)
{
    char str[100], *ptr;
    int i, len;
    gets(str);
    ptr = str;
    for(i=0;i<100;i++){
        if(*ptr == '\0') 
        break;
        ptr++;
    }
    len = i;
    ptr--;
    for(i=len; i>0; i--)
    {
        printf("%c",*ptr--);
    }
    return 0;
}
