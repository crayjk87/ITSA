#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0)//to determine whether it is 3's multiple
        {
            sum+=i;//if so, add it
        }
    }
    printf("%d\n",sum);
}