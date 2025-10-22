format like if input is 2 output will be 2 4 6 8 10 12 14 16 18 20

#include <stdio.h>

int main() {
    int n, i;

    printf("enter the number:");
    scanf("%d", &n);

    // Printing multiplication table up to 10
    for(i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }

    return 0;
}



format like if input is 2 out will be 2 x 1 = 2


#include <stdio.h>

int main() {
    int n, i;

    printf("enter the number:");
    scanf("%d", &n);

    
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
