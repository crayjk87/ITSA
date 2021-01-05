#include <stdio.h>

int main(){
    int inches;
    while(scanf("%d",&inches)!=EOF){
        printf("%.1f\n",(float)inches*1.6);//inches turn to meter;
    }

    return 0;
}