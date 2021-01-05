#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year;
    while(scanf("%d",&year)!=EOF){//every year belong to one animal
        if(year%12==6) printf("tiger\n");
        else if(year%12==7) printf("rabbit\n");
        else if(year%12==8) printf("dragon\n");
        else if(year%12==9) printf("snake\n");
        else if(year%12==10) printf("horse\n");
        else if(year%12==11) printf("sheep\n");
        else if(year%12==0) printf("monkey\n");
        else if(year%12==1) printf("rooster\n");
        else if(year%12==2) printf("dog\n");
        else if(year%12==3) printf("pig\n");
        else if(year%12==4) printf("rat\n");
        else if(year%12==5) printf("ox\n");
    }
    return 0;
}
