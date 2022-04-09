#include<stdio.h>
int main()
{
    int x,ar[1000];
    long sum=0;
    scanf("%d",&x);
   
   { for(int i=0;i<x;i++)
    {
        scanf("%d",ar+i);
    }
for(int i=0;i<x;i++)
{
sum=sum+(*(ar+i));
}
printf("%d", sum);
    return 0;
}
}
