#include <stdio.h>
#include <stdlib.h>

int recurf_(int );
int recurg_(int );

int main(){
    int n;
    scanf("%d",&n);
    printf("%d %d\n",recurf_(n), recurg_(n));//call two function
    return 0;
}

int recurf_(int num){
    if(num==1) return 2;
    return 3*(recurf_(num-1))+recurg_(num-1);//calculate 3f(n-1)+ g(n-1)
}

int recurg_(int num){
    if(num==1) return -6;
    return -1*(recurf_(num-1))+recurg_(num-1);//calculate -1f(n-1) + g(n-1)
}
