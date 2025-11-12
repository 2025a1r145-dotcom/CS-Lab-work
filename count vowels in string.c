#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int v,c,i=0;

    fgets(str,100,stdin);
    for (i=0;str[i];i++){
        char ch=tolower(str[i]);
            if (isaplha(ch)){
                if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                    v++;
                    
                }else{
                    c++;
                }
            }
        }
        printf("vowels:%d\n consonants:%d\n",v,c);
        return 0;
    }
