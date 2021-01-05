#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d*%d=%d\n",i,i,i*i);//the square of 1 to n
    }

    return 0;
}

