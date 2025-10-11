 area and perimeter of circle , square and rectangle


#include <stdio.h>
#define PI 3.14
int main() {
    float radius , side , length , breadth;
    printf("enter the radius of circle:");
    scanf("%f",&radius);
    printf("area of circle= %.2f\n", PI*radius*radius);
    printf("perimeter of cirlce= %.2f\n", 2*PI*radius);

    printf("enter the side of square:");
    scanf("%f",&side);
    printf("area of square= %.2f\n",side*side);
    printf("perimeter of square= %.2f\n",4*side);

    printf("enter the length of rectangle:");
    scanf("%f",&length);
    printf("enter the breadth of rectangle:");
    scanf("%f",&breadth);
    printf("area of rectangle= %.2f\n",length*breadth);
    printf("perimeter of rectangle= %.2f\n",2*(length+breadth));
    return 0;
  }
