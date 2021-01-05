#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){//to print upper of the shape
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++){//to print lower of the shape
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int j=2*(n-i)-1;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
