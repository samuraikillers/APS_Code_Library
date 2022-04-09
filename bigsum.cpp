#include<stdio.h>
int main()
{
    int x,ar[100];
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
printf("%ld", sum);
    return 0;
}
}
