#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[6];
    for(int i=0;i<6;i++) scanf("%d",&arr[i]);//enter 6 number
    for(int i=5;i>=1;i--) printf("%d ", arr[i]);//reverse it
    printf("%d\n",arr[0]);
    return 0;
}

