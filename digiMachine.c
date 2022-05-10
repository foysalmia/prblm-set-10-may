#include<stdio.h>

int main()
{
    int to[10];
    for(int i=0;i<10;i++)
        scanf("%d",&to[i]);

    int count = 0;
    for(int i=0;i<3;i++)
        count = to[count];

    printf("%d",count);

    return 0;
}

