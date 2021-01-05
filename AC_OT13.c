#include <stdio.h>
#include <stdlib.h>

int main(){
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);//the set of two point, calculate slope
    printf("%d\n",(x2-x1)/(y2-y1));
    return 0;
}

