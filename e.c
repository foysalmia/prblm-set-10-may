#include<stdio.h>
#include<string.h>

int main()
{
    char a[16],b[]="Hello,World!";

    gets(a);
    if(strcmp(a,b)==0)
    {
        printf("AC\n");
    }
    else
    {
        printf("WA\n");
    }

    return 0;
}
