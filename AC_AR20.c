#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int arr[n];
    int is_same = 1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);//enter input
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;//check whether it will be same
            else{
                if(arr[i] == arr[j]){ //if the same ,means finded, then break
                    is_same = 0;
                    break;
                }
            }
        }
    }
    printf("%d\n",is_same);

    return 0;
}
