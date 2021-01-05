#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>


int main(void){
    char words[257];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",words);
        int len = strlen(words);
        for(int j=len-1; j>=0 ;j--) printf("%c",words[j]);//print the reverse string
        printf("\n");
    }
    return 0;
}

