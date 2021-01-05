#include <stdio.h>

int main(){
    int arr[7];
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]); //enter 6 number
    }
    int sum = 0;
    for(int i = 0; i<6;i++){
        int temp = arr[i]*arr[i]*arr[i]; //make them times 3 times
        sum +=temp;
    }
    printf("%d\n",sum);//print the sum
    return 0;
}