#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n;
    while(scanf("%d",&n)!=EOF){//to determine what weather 
        if(n>=3&&n<=5) printf("Spring\n");
        else if(n>=6&&n<=8) printf("Summer\n");
        else if(n>=9&&n<=11) printf("Autumn\n");
        else if(n==12||(n>=1&&n<=2)) printf("Winter\n");
    }
    return 0;
}

