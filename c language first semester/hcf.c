#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=b%a;
    while(c)
    {
        b=a;
        a=c;
        c=b%a;
    }
    printf("%d",a);
}
