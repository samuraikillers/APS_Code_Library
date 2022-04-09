#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=x-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
    return 0;

}
