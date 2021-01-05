#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    int n;
    while(scanf("%d",&n)!=EOF){
        long long int num = 1;
        if(n>31) printf("Value of more than 31\n");//will overflow
        else{
            for(int i=1;i<=n;i++){//2^nto calculate
                num *= 2;
            }
            printf("%lld\n",num);
        }
    }

    return 0;
}
