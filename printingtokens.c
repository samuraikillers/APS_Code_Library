#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    char ch[20000];
    gets(ch);
    a=strlen(ch);
    for(int i=0;i<a;i++)
    {
        if(ch[i]==' ')
        {
            printf("\n");
        }
        else
            printf("%c",ch[i]);

    }
    return 0;
}
