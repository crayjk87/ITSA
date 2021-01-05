#include <stdio.h>

long long int recur(long long int n){
    if(n==0) return 1;
    return recur(n-1)*n; //factorial
}

int main(int argc, const char * argv[]) {
    long long int n;
    while(scanf("%lld",&n)!=EOF){
        printf("%lld\n",recur(n));//call recursive function
    }
    return 0;
}

