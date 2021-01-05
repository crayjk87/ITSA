#include<stdio.h>

long long int fac(long long int n){//factorial function
    if(n==0) return 1;
    return fac(n-1)*n;
}

int main(){
    long long int n;
    while(scanf("%lld",&n)!=EOF){
        printf("%lld\n",fac(n));//call factorial
    }
    
    return 0;
}

