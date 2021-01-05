#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b){//compare function
    return *(int*)b - *(int*)a;
}

int main(int argc, const char * argv[]) {
    int a[3];
    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,3,sizeof(int),cmp);//use qsort to sort from biggest to smallest
    printf("%d>%d>%d\n",a[0],a[1],a[2]);

    return 0;
}
