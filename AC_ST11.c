#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){

        if(n%2==0){//if n is even, make it be odd
            n=n-1;
        }
        for(int i=1;i<=(n+1)/2;i++){
            if(n==1){
               printf("*");
               printf("\n");
               break;
            }else{//to print upper of shape
                for(int j=1;j<=(n+1)/2-i;j++){
                printf(" ");
            }

            for(int k=1;k<=2*i-1;k++){
            printf("*");
          }
          printf("\n");
        }
    }
        for(int i=(n+1)/2-1;i>=1;i--){//to print lower shape
            if(n==1){
               break;
            }else{
                for(int j=1;j<=(n+1)/2-i;j++){
                printf(" ");
            }

            for(int k=1;k<=2*i-1;k++){
            printf("*");
          }
          printf("\n");
        }
        }

    }

    return 0;
}
