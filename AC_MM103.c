#include <stdio.h>
#include <stdlib.h>

int fab(int num){
    if(num==1) return 1;// first and second is 1，other are f(n-1)+f(n-2)
    if(num==2) return 1;
    return fab(num-1)+ fab(num-2);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",fab(n));//call Fibonacci Sequence
}