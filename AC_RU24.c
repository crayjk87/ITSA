#include <stdio.h>
#include <stdlib.h>

double recur_(double num){
    if(num==1) return 2;//f(1)=2
    return 2*(recur_(num-1))/(1+2*recur_(num-1));//calculate 2*f(n-1)/(1+2f(n-1))
}

int main(){
    double n;
    scanf("%lf",&n);
    printf("%.5lf\n",recur_(n));//call fun ction
    return 0;
}

