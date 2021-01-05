#include <stdio.h>
#include <stdlib.h>

double recur_(double num){
    if(num==1) return 1;//calculate (f(n-1)+2)/2
    return (recur_(num-1)+2)/2;
}

int main(){
    double n;
    scanf("%lf",&n);
    printf("%.5lf\n",recur_(n));//call recursive function
    return 0;
}

