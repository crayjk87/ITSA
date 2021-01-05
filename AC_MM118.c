#include <stdio.h>
#include <string.h>


int main(){
    char num[1000];
    char reverse[1000];
    while(scanf("%s",num)!=EOF){
        int len = strlen(num);//calculate the length of string
        for(int i=0;i<len;i++){
            reverse[i] =num[len-1-i] ;//reverse and store the string
        }
        reverse[len] = '\0';
        printf("%s\n",reverse);
    }
    return 0;
}