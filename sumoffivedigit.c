#include<stdio.h>
int main()
{
     int a,f,h,m,n,l,add;
    double s,d,c,g,e,k;

    scanf("%d", &a);
    s=a%10;
    c=a/10;


   f=c;
   d=f%10;

   g=c/10;


   h=g;
  k=h%10;

   m=h/10;


    n=m%10;

    l=m/10;

    add=s+d+k+n+l;
    printf("%d", add);
    return 0;
}
