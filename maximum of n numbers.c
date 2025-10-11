#include <stdio.h>

int main() {
    int n, i;
    int max, num;

    printf("How many numbers? ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;  // First number is max initially

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;  // Update max if current number is bigger
        }
    }

    printf("Maximum number is: %d\n", max);

    return 0;
}
