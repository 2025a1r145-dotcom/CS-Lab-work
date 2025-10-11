euclidean distance


  #include <stdio.h>
  #include <math.h>
  int main() {
    float x1,x2,y1,y2,distance;
    printf("enter the value for x1 and x2:")
    scanf("%f,%f", &x1,&x2);
    printf("enter the value for y1 and y2:");
    scanf("%f,%f", &y1,&y2);
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("the euclidean distane=%.2f\n",distance)
    return 0;
  }
