arithmatic operations using addition , subtraction , multiplication and remainder operator


#include <stdio.h>
int main() {
    int num1 , num2;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    printf("\n result of arithmatic operation:\n");
    printf("addition:%d+%d=%d\n",num1,num2,num1+num2);
    printf("subtraction:%d-%d=%d\n",num1,num2,num1-num2);
    printf("multiplication:%d*%d=%d\n",num1,num2,num1*num2);
    printf("remainder:%d %% %d=%d\n",num1,num2,num1%num2);
    return 0;
  }
