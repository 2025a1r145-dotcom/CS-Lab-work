TO FIND THE FACTORIAL OF A NUMBER


#include <stdio.h>
int main() {
    int i,n,factorial;
    printf("enter the number:");
    scanf("%d",&n);
    factorial=1;

    for (i=1;i<=n;i++){
          factorial=factorial*i;
    }
    printf("the factorial is %d\n",factorial);
    return 0;
}
