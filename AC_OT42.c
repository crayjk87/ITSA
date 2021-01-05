#include    <stdio.h>
#include    <stdlib.h>

int main(void){
    int m,n;
    scanf("%d %d",&m,&n);
    if(n==0||m==0) {
        printf("no answer\n");
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){//to draw a graph of star
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

