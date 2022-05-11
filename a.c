#include<stdio.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    int arr[n];

    for(int i=1;i<n+1;i++){
        scanf("%d",&a);
        arr[a-1] = i;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
