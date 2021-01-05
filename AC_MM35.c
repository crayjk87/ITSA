#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    while(scanf("%d", &year)!=EOF){

        if(year%4==0&& year%100!=0 ||year%400==0){
            printf("Bissextile Year\n");//4 year a bissextile, 100 year no bissextile, 400 year bissextile
        }else{
            printf("Common Year\n");
        }

    }
    return 0;
}