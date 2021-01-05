#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("*");//printf the rectangle star shape, lenght is n, width is m
        }
        printf("\n");
    }
}