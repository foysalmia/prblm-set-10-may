#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int arr[a],count = 0;
    for(int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] == 0 )
        {
            printf("%d",i);
            return 0;
        }
    }

    for(int i=0; i<a; i++)
    {
        if(arr[i] >= arr[b-1] )
            count++;
    }
    printf("%d",count);
    return 0;
}
