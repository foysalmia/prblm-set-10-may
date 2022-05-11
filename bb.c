#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int ar;

    scanf("%d",&ar);

    for(int k = 0 ;k<ar;k++){
        int n;

    scanf("%d",&n);
    int a[n];

    for(int i = 0 ; i<n ; i++){

        scanf("%d",&a[i]);

    }
    for(int i = 0 ; i<1 ; i++){

        for(int j = 1 ; i<n ; j++){
            if(a[i] != a[j]){
                if(a[j]==a[j+1]||a[j]==a[j-1]){
                    printf("%d\n",i+1);
                    break;
                }else{
                    printf("%d\n",j+1);
                    break;
                }
            }
        }
    }

    }

    return 0;

}
