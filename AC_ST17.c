#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
    char input[1000];
    char reverse[1000];
    while(scanf("%s" , input)!=EOF){
        int length;
        length=strlen(input);
        for(int i=length-1; i>=0 ; i--){
            reverse[length-1-i] = input[i];//store the reverse string
        }
        if(strcmp(input,reverse)==0) printf("YES\n");//if the same print YES
        else printf("NO\n");//else print NO
        
    }
   return 0;
 
}