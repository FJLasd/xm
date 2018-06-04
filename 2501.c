#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    gets(a);
    int i=0;
    for(i=0;a[i]!='@';i++)

        printf("%c",a[i]);

    return 0;
}
