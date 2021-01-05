#include <stdio.h>
#include <stdlib.h>

int main(){
    int len[3];
    for(int i=0;i<3;i++) scanf("%d",&len[i]);
    for(int i=0;i<3-1;i++){//use bubble sort to sort the triangle's three length
        for(int j=0; j<3-i-1; j++){
            if(len[j]>len[j+1]){
                int temp = len[j];
                len[j] = len[j+1];
                len[j+1] = temp;
            }
        }
    }
    if(len[0]+len[1]>len[2]) printf("Bigger than the third side\n");//if the longest side is bigger than others,then it's a triangle
    else printf("Less than the third side\n");//else nont

    return 0;
}

