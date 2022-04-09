#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
     int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    int max=0;
  int max1=0;
  int max2=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]|a[j])>=max&&(a[i]|a[j])<k)
            {
                max=a[i]|a[j];
            }

        }

    }
       for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]&a[j])>=max1&&(a[i]&a[j])<k)
            {
                max1=a[i]&a[j];
            }

        }

    }
       for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]^a[j])>=max2&&(a[i]^a[j])<k)
            {
                max2=a[i]^a[j];
            }

        }

    }
    printf("%d\n%d\n%d",max1,max,max2);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
