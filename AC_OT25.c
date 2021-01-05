#include <stdio.h>

int ACC(int n){// the function recursive of form buttom add to 1
    if(n==1) return 1;
    return n+ACC(n-1); 
}

int main(){
    int math;
    scanf("%d",&math);
    printf("%d\n",ACC(math));//call function
}