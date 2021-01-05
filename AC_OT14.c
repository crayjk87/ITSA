#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("%d x %d = %d\n",i,j,i*j);//m*n table , m is Multiplicand, n is multiplier
        }
    }
    return 0;
}

