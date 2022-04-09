#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int ar[1000],sum=0,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
    }

    printf("%d",sum);
    return 0;
}

