#include    <stdio.h>
#include    <stdlib.h>

void display(int *arr){
    for(int i=0;i<9;i++) printf("%d ",arr[i]);//printf the reverse array
    printf("%d\n",arr[9]);
}

void reverse(int *arr){
    int temp[10];
    for(int i =0;i<10;i++){
        temp[i] = arr[9-i];//reverse the array number
    }
    display(temp);//call display function
}

int main(void){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr);//call reverse function
    return 0;
}

