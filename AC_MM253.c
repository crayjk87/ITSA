#include <stdio.h>
#include <stdlib.h>

void generate_num(int n){
    printf("%d\n",n);
    while(n!=1){
        if(n %2==0){//if n is even, divide by 2
            n=n/2;
            printf("%d\n",n);
        }
        else{//else n is odd, times 3 and add 1
            n=3*n+1;
            printf("%d\n",n);
        }
    }
}

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        generate_num(n);//call 3n+1
    }
    return 0;
}
