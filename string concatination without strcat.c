//// without using strcat


#include<stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100];
    int i=0,j=0;

    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    int len1 = strlen(str1);
    if (str1[len1 - 1] == '\n')
        str1[len1 - 1] = '\0';  

    int len2 = strlen(str2);
    if (str2[len2 - 1] == '\n')
        str2[len2 - 1] = '\0';  

    while (str1[i]!='\0'){
        i++;
    }
     str1[i] = ' ';
    i++;
    while (str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("joined string: %s\n",str1);
    return 0;
}
