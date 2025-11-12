// reverse string without using strrev



#include <stdio.h>
#include <string.h>
int main(){
    char str[100],temp;
    int i=0,j;

    fgets(str,100,stdin);
    j=strlen(str)-1;

    while (i<j){
          temp=str[i];
          str[i]=str[j];
          str[j]=temp;
          i++;
          j--;
    }

printf("reversed string: %s\n",str);
return 0;
}
