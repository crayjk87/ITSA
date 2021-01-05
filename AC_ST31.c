#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>
#include    <ctype.h>

int main(void){
    char input[129];
    char c;
    while((c = getchar())!=EOF){
        if(isspace(c)) continue;//printf alphabet, other skip
        else printf("%c",c);
    }
    printf("\n");
    return 0;
}
