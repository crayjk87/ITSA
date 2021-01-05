#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    double num[10];
    int i=0;//give at most 10 float number
    double sum =0.0;
    while(scanf("%lf",&num[i])!=EOF){
        sum += num[i]*num[i]; // square it and add it together 
        i++;
    }
    printf("%.6lf\n",sum);
    return 0;
}
