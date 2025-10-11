TO FIND THE SIMPLE INTREST 


#include <stdio.h>
int main() {
    float principal,rate,time,simple_intrest;

    printf("enter the principal amount:");
    scanf("%f",&principal);
    
    printf("enter the rate of intrest:");
    scanf("%f",&rate);
    
    printf("enter the time:");
    scanf("%f",&time);
    simple_intrest=(principal*rate*time)/100;

    
    printf("the simple intrest is %.2f\n",simple_intrest);
    return 0;
}
    
