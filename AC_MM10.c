#include <stdio.h>
#include <stdlib.h>

int main(){
    double n;
    while(scanf("%lf",&n)!=EOF){

        printf("%.1lf\n",n*9/5+32);//turn temperature F to C
    }
    return 0;
}

